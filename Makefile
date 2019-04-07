CC = gcc
PR = -std=c++17 -g
SRC = $(wildcard src/*.cpp)\
	  $(wildcard src/objects/*.cpp)
OBJ = $(SRC:%.cpp=%.o)
LDFLAGS = -lSDL2_image -lSDL2 -lstdc++
INC = -Isrc/ -Isrc/objects/

all: main

main: $(OBJ)
	$(CC) $(PR) -o $@ $^ $(LDFLAGS) 

%.o: %.cpp
	$(CC) $(PR) -c $< -o $@ $(INC)

clean:
	rm -f $(OBJ) main