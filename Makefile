INCLUDES=-I C:/cpp_includes/eigen-3.4.0 -I C:/cpp_includes/

COMPILER_FLAGS=-Wall -std=c++20

BUILDDIR=build
$(shell mkdir -p $(BUILDDIR))

main: main.cpp
	g++ $(COMPILER_FLAGS) $(INCLUDES) main.cpp my_functions.h my_functions.cpp -o $(BUILDDIR)/main

test: test.cpp
	g++ $(COMPILER_FLAGS) $(INCLUDES) test.cpp my_functions.h my_functions.cpp -o $(BUILDDIR)/test

all: main test

clean:
	rm -rf $(BUILDDIR)