# Compiler
CXX = clang++

# Compiler flags (change or add as needed)
CXXFLAGS = -std=c++17 -O2 -Wall -Wextra -Wshadow -Wconversion

# Source file, override this variable on command line or default to main.cpp
SRC ?= main.cpp

# Executable name defaults to 'out'
EXE ?= out

# Default target: build the executable from the SRC file
all: $(EXE)

# Build rule
$(EXE): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Run the executable
run: $(EXE)
	./$(EXE)

# Clean build files
clean:
	rm -f $(EXE)

.PHONY: all run clean
