CC=g++
CFLAGS=-c -Wextra -O0 -g

TARGET=package
SOURCES = main.cpp Laptop.cpp Gaming.cpp Folding.cpp Convertible.cpp Buisiness.cpp Ultrabook.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

# main.o: main.cpp
# 	$(CC) $(CFLAGS) main.cpp

# Bicycle.o: Bicycle.cpp
# 	$(CC) $(CFLAGS) Bicycle.cpp

# Details.o:
# 	$(CC) $(CFLAGS) Details.cpp

# MTBDetails.o:
# 	$(CC) $(CFLAGS) MTBDetails.cpp

# RoadBicycle.o:
# 	$(CC) $(CFLAGS) RoadBicycle.cpp

# RoadDetails.o:
# 	$(CC) $(CFLAGS) RoadDetails.cpp

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ $<


clean:
	rm -rf $(OBJECTS) $(TARGET)