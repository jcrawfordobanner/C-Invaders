#include<stdio.h>
#include<ncurses.h>
// #include </usr/lib/ncurses.h>

// char getInput() {
//
// }
int main() {
	initscr();
	while(1) {
		int ch;
		ch = getch();

		if (ch == KEY_LEFT) {
			printf("Left arrow\n");
		}
	}
}
