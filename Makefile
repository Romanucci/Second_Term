CXX=clang++ -g -std=c++20 -Wall -pedantic

.PHONY: all
all:
	make clean
	make lib
	make bin
	make lib/libmath.so
	cp -r src/**.h demo/
	make main
	rm -rf */**.o demo/*.h demo/**/*.h 

.PHONY: demo
demo:
	make all
	bin/main

.PHONY: main
main: lib/libmath.so bin/main.o
	$(CXX) -o bin/main bin/main.o -L./lib -Isrc/ -lmath

.PHONY: lib/libmath.so
lib/libmath.so: src/point.cpp src/line.cpp
	$(CXX) -fPIC -c src/point.cpp -o bin/point.o
	$(CXX) -fPIC -c src/line.cpp -o bin/line.o
	$(CXX) -shared  -Wl -o lib/libmath.so bin/point.o bin/line.o

.PHONY: bin/main.o
bin/main.o: demo/main.cpp
	$(CXX) -fPIC -c demo/main.cpp -o bin/main.o
.PHONY: lib
lib:
	mkdir -p lib

.PHONY: bin
bin:
	mkdir -p bin

.PHONY: clean
clean:
	rm -rf */**.o */**.so bin/ lib/