CXX = g++
CXXFLAGS = -std=c++17 -Wall
LIBS = -lmodbus

TARGET = modbus_client
SRC = main.cpp

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET) $(LIBS)

clean:
	rm -f $(TARGET)
