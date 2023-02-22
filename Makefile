CXX=clang++ -g -std=c++20 -Wall -pedantic

.PHONY: all
all:
	make clean
	make lib
	make bin
	make lib/libmath.so
	cp -r src/**.hpp demo/
	make main
	rm -rf */**.o demo/*.hpp demo/**/*.hpp bin/

.PHONY: demo
demo:
	make all
	demo/main

.PHONY: main
main: lib/libmath.so demo/main.o
	$(CXX) -o demo/main demo/main.o -L./lib -Isrc/ -lmath

.PHONY: lib/libmath.so
lib/libmath.so: src/math.cpp
	$(CXX) -fPIC -c src/math.cpp -o bin/math.o
	$(CXX) -shared  -Wl -o lib/libmath.so bin/math.o

.PHONY: lib
lib:
	mkdir -p lib

.PHONY: bin
bin:
	mkdir -p bin

.PHONY: clean
clean:
	rm -rf */**.o */**.so bin/ lib/