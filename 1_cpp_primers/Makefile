CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = 1_6
SOURCE = $(TARGET).cpp

all: $(TARGET)

$(TARGET) : $(SOURCE) 
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCE)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
