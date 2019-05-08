# C-Invaders
By: Diego Berny and Jordan Crawford-O'Banner

### Project Goals
The goal of our project was to recreate the classic arcade game Space Invaders using the C skills we have learned thus far. We eventually changed the minimum viable project (MVP) of our project goals to reflect the amount of progress that had been made. Considering the difficulty and overhead of learning to implement OPenGL, we decided to change our smaller goal to getting the player character on the screen and having it be able to rotate left and right using the keyboard. With more time, our plan would be to have the player character and the enemies on the screen. The enemies would move in a repetitive pattern down the screen.

### Learning Goals
For this project, we aimed to learn how to use the libraries available in C in order to have the basic foundations for making a game. More specifically, we wanted to be able to create graphics on the screen and change them depending on what inputs we get. In terms of getting input, we wanted to implement some method of detecting key presses from a user's keyboard in order to control the objects shown on screen.

### Resources
We have chosen to use the OpenGL and ncurses libraries for our project. We have found an extremely in depth tutorial on OpenGL [here](https://learnopengl.com/), and it has been a very helpful resource so far. In order to get input from the keyboard we used a library called ncurses. The library is available [here](https://www.cyberciti.biz/faq/linux-install-ncurses-library-headers-on-debian-ubuntu-centos-fedora/).

In order to use the OpenGL tutorial that was linked above, it is necessary to download the GLFW, Glad and GLM libraries. It can be difficult to find clear places or ways to download and use these files. In order to install the GLFW library you must execute the following line in the command line:

```
sudo apt-get install libglfw3-dev
```

The Glad library can be downloaded using this [web service](https://glad.dav1d.de/). After selecting C\C++ for the language and at least OpenGL version 3.3. Also make sure the profile is set to Core and that the Generate a loader option is ticked. Then click Generate to produce the resulting library files. GLM can be downloaded from their [website](https://glm.g-truc.net/0.9.8/index.html). Both of these libraries should be put directly in the folder that you are working in.

We also had some difficulty writing compilation commands in the command line. So here is an example of how to compile code that uses all of these libraries:

```
g++ -o executable glad.o glad/glad.h mainfile.cpp -std=c++0x  -lGL -lglfw -ldl -lncurses
```

All the commands necessary to run the files are also saved in our Makefile.

### What We have Accomplished
We have created the mvp that we had stated previously. In its current state, our program generates a screen that shows the player character, and the user is able to turn the character using the a and b keys.

The code starts by initializing the screen the OpenGL will put images on. The window needs to be defined with a size before anything else can be done in OpenGL.

```C++
glfwInit();
initscr();
noecho();
cbreak();
glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
```

OpenGL requires that the points that we define be put through a shader object in order to render it. In separate files we define the vertex shader and the fragment shaders, which affect how the points are moved in space and what color fills the space respectively.

```C++
#version 330 core
layout (location = 0) in vec3 aPos;
uniform mat4 trans;
void main() {
	gl_Position = trans * vec4(aPos, 1.0);
}
```

The vertex shader, shown above, is the most important part because it multiplies the shape given to the shader by a transformation matrix that is defined later in the code. After defining the shader object using these files, the shape of the shape of the player’s character is defined as a set of points on the screen in the shape of a triangle.

After the vertices of the player character is defined, images can be put on the screen. The screen has to be continuously updated with the current position of the player character, so the angle of the triangle is saved in a float variable.

```C++
char input = getch();
switch (input) {
	case 97:
		rad += 1.0f;
		break;
	case 98:
		rad -= 1.0f;
		break;
}
glm::mat4 trans = glm::mat4(1.0f);
trans = glm::rotate(trans, glm::radians(rad), glm::vec3(0.0, 0.0, 1.0));
```
The switch statement checks whether the player pressed the ‘a’ or ‘b’ key and increments or decrements their current angle. The current angle is then put into a rotation vector that is made using GLM’s rotate class. This vector is put into the shader during every update to rotate the triangle into the right direction.

### Reflection
By the end of this project, we had accomplished our learning goals but not to the extent that we wished. We feel that we understood how to get input from the keyboard, and we were able to implement it well. However, getting to that point in our process took longer than we initially expected it to. We had started out trying outdated libraries (like curses, which has since been replaced by ncurses) and a library that solved the problem but made receiving input a much more obtuse process (by modifying the terminal settings and how it interacts with the program), which could also be inconsistent based on the user’s environment. In addition, OpenGL was very difficult for us to learn. We spent a lot of trying time trying to understand the specifics of how OpenGL worked and the reasoning behind each line of code we wrote, but in doing so, we lost valuable time that could have been spent working towards our MVP. We believed that understanding OpenGL would lead to an easier time going past our mv, but the amount of information was almost overwhelming. In the future, we would spend less time trying to go through libraries in great detail and try to focus more on using their capabilities to complete our goals.
