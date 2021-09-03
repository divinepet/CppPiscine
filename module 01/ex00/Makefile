CC=clang++
CFLAGS=-std=c++98 -c -Wall -Werror -Wextra
SOURCES=main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=test

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJECTS)

fclean: clean
		rm -rf $(EXECUTABLE)

re: fclean all