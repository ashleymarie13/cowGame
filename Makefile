CC = g++
CFLAGS = -Wall
DEPS = main.cpp
OBJ = main.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

run: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean: 
	rm -rf *o run