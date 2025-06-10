# kompilator i flagi
CXX = g++
CXXFLAGS = -Wall -std=c++11

# ścieżki
SRC_DIR = src
INC_DIR = include
BUILD_DIR = build

# pliki źródłowe i obiekty
SOURCES = $(SRC_DIR)/ZadKcpp.cc main.cc
OBJECTS = $(SOURCES:.cc=.o)

TARGET = program

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

# reguły kompilacji 
%.o: %.cc
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
