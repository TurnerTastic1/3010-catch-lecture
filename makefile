# Compiler and Flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic

# The default target will build and run tests.
test: test.o functions.o
	$(CXX) $(CXXFLAGS) -o test_exec test.o functions.o
	./test_exec

# Compile object file for the test code
test.o: test.cpp catch.hpp functions_to_implement.hpp
	$(CXX) $(CXXFLAGS) -c test.cpp -o test.o

# Compile object file for the functions implementation
functions.o: functions_to_implement.cpp functions_to_implement.hpp
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp -o functions.o

# Clean target to remove all build artifacts
clean:
	rm -f *.o test_exec