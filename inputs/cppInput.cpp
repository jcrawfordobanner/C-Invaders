#include<stdio.h>
#include<ncurses.h>
#include <termios.h>
// #include <conio.h>

// #include </usr/lib/ncurses.h>

// char getInput() {
//
// }
int main() {
	initscr();
	noecho();
	cbreak();
	// halfdelay(50);
	// nodelay(stdscr,0);
	char ch;

	// printf("Input Char Is :%c\n",ch);
	while (1) {
		// int chs = getch();
		// printf("%d\n", ch);
		ch = getch();
		if (ch == 97) {
			printf("you hit a\n");
		}
	}
}
