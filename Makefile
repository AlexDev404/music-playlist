# Variables
CXX = g++
CXXFLAGS = -Wall -Iinclude
LDFLAGS = 
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Gather all .cpp files in SRC_DIR
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
# Object files go into OBJ_DIR
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
# Executable goes into BIN_DIR
EXEC = $(BIN_DIR)/program

# Default target
all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Phony targets
.PHONY: clean

clean:
	rm -f $(OBJS) $(EXEC)