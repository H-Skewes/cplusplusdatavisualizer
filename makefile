CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g
TARGET = app
SOURCES = main.cpp mainhelpers.cpp mathhelpers.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

test: run_tests
	@./run_tests
	
.PHONY: all clean test