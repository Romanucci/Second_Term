CLEANEXTS   = o so

# Specify the source files, the target files, 
# and the install directory 
SOURCES     = src/main.cpp
OUTPUTFILE  = bin/lib.so

.PHONY: all
all: $(OUTPUTFILE)

$(OUTPUTFILE): $(subst .cpp,.o,$(SOURCES)) 
	$(CXX) -shared -fPIC $(LDFLAGS) -o $@ $^

.PHONY: clean 
clean:
	rm -rf bin/ 
	rm -rf src/*.o

# Generate dependencies of .ccp files on .hpp files
include $(subst .cpp,.h,$(SOURCES))

%.h: %.cpp
	$(CC) -M $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
rm -f $@.$$$$