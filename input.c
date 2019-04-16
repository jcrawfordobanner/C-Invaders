#include<stdio.h>
#include<ncurses.h>
#include <termios.h>

// #include </usr/lib/ncurses.h>

// char getInput() {
//
// }
int main() {


	struct termios info;
	tcgetattr(0, &info);          /* get current terminal attirbutes; 0 is the file descriptor for stdin */
	info.c_lflag &= ~ICANON;      /* disable canonical mode */
	info.c_cc[VMIN] = 1;          /* wait until at least one keystroke available */
	info.c_cc[VTIME] = 0;         /* no timeout */
	tcsetattr(0, TCSANOW, &info); /* set immediately */

	int ch;
	while((ch = getchar()) != 27 /* ascii ESC */) {
	    if (ch < 0) {
	        if (ferror(stdin)) { /* there was an error... */ }
	        clearerr(stdin);
	        /* do other stuff */
	    } else {
			if (ch == 97) {
				printf("you hit a\n");
			}
	        /* some key OTHER than ESC was hit, do something about it? */
	    }
	}
	tcgetattr(0, &info);
	info.c_lflag |= ICANON;
	tcsetattr(0, TCSANOW, &info);
}
