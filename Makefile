tutorial2: tut2.c
	gcc glad.o glad/glad.h tut2.c -o tutorial2 -lGL -lglfw -ldl

input: input.c
	gcc -o input input.c -lncurses

changeColor: changeColor.c
	gcc glad.o glad/glad.h changeColor.c -o changeColor -lGL -lglfw -ldl -lncurses
