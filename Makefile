GCC=gcc
CFLAGS= -Wall -g

main: main.c

main.c:
	$(GCC) $(CFLAGS) main main.c

clean:
	rm main
