#include <ncurses/ncurses.h>
#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;

int main(){
	initscr();
	start_color();
	init_pair(1,COLOR_RED,COLOR_BLACK);
	init_pair(2,COLOR_BLUE,COLOR_BLACK);
	init_pair(3,COLOR_GREEN,COLOR_BLACK);
	init_pair(4,COLOR_CYAN,COLOR_BLACK);
	init_pair(5,COLOR_YELLOW,COLOR_BLACK);
	
			
	attron (COLOR_PAIR(1));
	mvprintw (15, 60, "LOADING.");
	refresh();
	Sleep(1000);
	clear();
	
	attron (COLOR_PAIR(2));
	mvprintw (15, 60, "LOADING..");
	refresh();
	Sleep(1000);
	clear();
	
	attron (COLOR_PAIR(3));
	mvprintw (15, 60, "LOADING...");
	refresh();
	Sleep(1000);
	clear();
	  
	attron (COLOR_PAIR(4));		
	mvprintw (15, 60, "LOADING....");
	refresh();
	Sleep(1000);
	clear();
		
	attron (COLOR_PAIR(5));	
	mvprintw (15, 60, "LOADING.....");
	refresh();
	Sleep(1000);
	clear();
	
	attron (COLOR_PAIR(2));	
	mvprintw (15, 60, "LOADING......");
	refresh();
	Sleep(1000);
	clear();
	

	
	return 0;
	
	
	
}
