software: shoes.o function.o
	gcc -o software shoes.o function.o
software.o:software.c
	gcc -c software.c
function.o:function.c
	gcc -c function.c
clean:
	rm software *.o