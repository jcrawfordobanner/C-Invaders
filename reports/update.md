# C-Invaders

By: Diego Berny and Jordan Crawford-O'Banner

### Project Goals
The goal of our project is to recreate the classic arcade game Space Invaders using the C skills we have learned thus far. We have changed the lower bound of our project goals to reflect the current status of the project. Considering the difficulty and overhead of learning to implement OPenGL, we have decided to change our smaller goal to getting the player character on the screen and having it be able to rotate left and right using the keyboard.Our reach goal would be to have the player character and the enemies on the screen. The enemies should move in a repetitive pattern down the screen and occasionally shoot out blasts.

### Learning Goals
For this project, we want to learn how to use the libraries available in C in order to have the basic foundations for making a game. More specifically, we want to be able to create graphics on the screen and change them depending on what inputs we get. In terms of getting input, we want to implement some method of detecting key presses from a user's keyboard in order to control the objects shown on screen.

### Resources
We have chosen to use the OpenGL and termios libraries for our project. We have found an extremely in depth tutorial on OpenGL [here](https://learnopengl.com/), and it has been a very helpful resource so far. We are currently using the termios library to implement keyboard commands, but we would prefer to find another way to implement keyboard commands. We are currently using termios to make the terminal automatically accept keyboard commands, but we would like to use a library that does not require sending data through the terminal.

### What We have Accomplished
We have made a great deal of progress in both keyboard inputs and images. We have delved far enough into the OpenGL tutorials to make two dimensional images appear on the screen and to make the background change color. We have also managed to set up our github repository so that using OpenGL is as simple as possible.

We had first attempted to use many different libraries to detect keyboard commands, but most proved very difficult to download and effectively link to our code or ineffective. We decided to use the termios library, which allows us to change the terminal settings to have it report inputs without the user needing to press enter. We have used the to make the background color on the screen change depending on the letter that was pressed on the keyboard.

### Current Tasks
We want to figure out a better way to detect key presses using a different library, so Diego is looking at different libraries that could give us the functionality we want. The termios library requires the focused window to be on the terminal, and every key that is pressed also appears on the terminal screen, which is not the cleanest design. Our goal with this is to have the focus on the game window instead of the terminal and prevent the input from also echoing in the terminal. Currently the most likely option is using the ncurses library, although it has proven to be less straightforward than expected.

We are also working to manipulate the graphics in more ways, so Jordan is working through an OpenGL tutorial that should give more insight into the different things we can do with the library. From this work we want to be able to rotate objects on the screen and put them in different locations in that window.

Additionally, we want to set up the entire "map" of the screen to resemble the layout on a real Space Invaders game. Our starting screen should have the player's ship along with a number of obstacles and enemies.
