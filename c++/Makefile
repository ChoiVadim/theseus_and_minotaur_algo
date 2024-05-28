CXX = g++
CXXFLAGS = -std=c++11 -Wall

TARGET = maze
OBJS = main.o config.o helpers.o mazes.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp config.h helpers.h mazes.h
	$(CXX) $(CXXFLAGS) -c main.cpp

config.o: config.cpp config.h
	$(CXX) $(CXXFLAGS) -c config.cpp

helpers.o: helpers.cpp helpers.h
	$(CXX) $(CXXFLAGS) -c helpers.cpp

mazes.o: mazes.cpp mazes.h
	$(CXX) $(CXXFLAGS) -c mazes.cpp

clean:
	rm -f $(TARGET) $(OBJS)
