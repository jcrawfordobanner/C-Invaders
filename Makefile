tutorial2: tut2.c
	gcc glad.o glad/glad.h tut2.c -o tutorial2 -lGL -lglfw -ldl

++: plustest.cpp
	g++ -o ++ glad.o glad/glad.h shader.h plustest.cpp -std=c++0x  -lGL -lglfw -ldl

input: input.c
	gcc -o input input.c

changeColor: changeColor.c
	gcc glad.o glad/glad.h changeColor.c -o changeColor -lGL -lglfw -ldl -lncurses
