open Bsb_internals;

let ( +/ ) = Filename.concat;

gcc("lib" +/ "bs" +/ "fun.o", ["src" +/ "Fun.c"]);
