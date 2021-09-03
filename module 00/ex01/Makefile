CC=clang++
CFLAGS=-std=c++98 -c -Wall -Werror -Wextra
SOURCES=main.cpp User.cpp utilities.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=phonebook

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