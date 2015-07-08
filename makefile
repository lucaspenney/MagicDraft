SOURCE=$(wildcard src/*.cpp)
PROGRAM=magicdraft
INCLUDES=src/include

LIBRARIES=curl
CC=g++


all: $(PROGRAM)

$(PROGRAM): $(SOURCE)

	$(CC) -std=c++11 -I$(INCLUDES) $(SOURCE) -o$(PROGRAM) -l$(LIBRARIES)

clean:

	rm -f $(PROGRAM) $(OBJECTS)


run: ./$(PROGRAM)
	./$(PROGRAM)
