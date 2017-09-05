all: lib/bs/fun.o
	
lib/bs/fun.o: src/Fun.c
	ocamlc -ccopt -o -ccopt lib/bs/fun.o src/Fun.c
