all: signals.o
	gcc signals.o

signals.o: signals.c
	gcc -c signals.c

clean:
	rm *.o
	rm a.out

run:
	./a.out
