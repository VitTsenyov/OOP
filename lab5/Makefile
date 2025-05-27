CC=g++
CFLAGS=-c -Wextra -O3 -g

TARGET=package
SOURCES = main.cpp Megabook.cpp Laptop.cpp Gaming.cpp Folding.cpp Convertible.cpp Buisiness.cpp Ultrabook.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ $<


clean:
	rm -rf $(OBJECTS) $(TARGET)