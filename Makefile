# Compiler
CC = g++

# Compiler flags
CFLAGS = -std=c++17 -Wall

# Source files
SRC = $(wildcard src/*.cpp)

# Object files
OBJ = $(SRC:.cpp=.o)

# Build object files
build:
	$(CC) $(CFLAGS) -c $(SRC)

# Clean object files, executable
clean:
	rm -f $(OBJ)
