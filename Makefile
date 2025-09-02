CC = clang
CFLAGS = -Wall -Wextra -std=c11

main: main.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f main *.olang -o -Wall main main.c
