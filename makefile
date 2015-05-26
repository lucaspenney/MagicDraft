SOURCE=$(wildcard src/*.cpp)
PROGRAM=magicdraft
INCLUDES=src/include

LIBRARIES=''
CC=g++


all: $(PROGRAM)

$(PROGRAM): $(SOURCE)

	$(CC) -I$(INCLUDES) $(SOURCE) -o$(PROGRAM) #-l$(LIBRARIES)

clean:

	rm -f $(PROGRAM) $(OBJECTS)
	

run: ./$(PROGRAM)
	./$(PROGRAM)
