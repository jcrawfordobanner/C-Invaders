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

	  // int i,row,column;
	  // //getting position of cursor by getyx function
	  // for (i=column; i<=last_column; i+=2)
	  // {
	  //   //time interval of 1 sec
	  //
	  //   mvprintw(row,b,"<");   //print < in given (b,row) coordinates
	  //
	  //   //time interval of 1 sec
	  //
	  //   mvprintw(row,(b+1),"O");  //print "O" next to "<"
	  //   int h = getch();   //to give the option for pressing another key
	  //   if (h != KEY_RIGHT)  //break current loop if another key is pressed
	  //   {
	  //     break;
	  //   }
	  // }
	}
}
