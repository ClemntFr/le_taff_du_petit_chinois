all: triFusion.c
	gcc -o fusion triFusion.c

clean:
	$(RM) fusion
