all: filereader

test: all
	./filereader inputfile.txt

filereader: filereader.c
	gcc -o filereader filereader.c

clean:
	$(RM) filereader
