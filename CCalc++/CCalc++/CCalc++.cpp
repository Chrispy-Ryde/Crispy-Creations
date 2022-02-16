//                      CCalc++ QuikTip
//                     Christian S Pryde
//   I am passionate to learn everything I can about science, math, and technology.
//   --  Just one step closer to my dreams, That keeps me going.  --

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

void gotoxy(short x, short y);    //here we declare the gotoxy function//

void border() {
	int l1, style = 178;
	for (l1 = 1, l1 <= 70; l1++;) // Declares a looping variable l1 across the horizontal range.
	{
		gotoxy(l1, 1); // Moves cursor across x, y output console
		_cprintf("%c", style); // Assigns the style variable to the character operator
		gotoxy(l1, 24);
		_cprintf("%c", style);
	}
	for (l1 = 1; l1 <= 24; l1++)
	{
		gotoxy(1, l1);
		_cprintf("%c", style);
		gotoxy(70, l1);
		_cprintf("%c", style);
	}
};
int main() {
	system("CLS");
	border();
	_getch();
};

void gotoxy(short x, short y)           //definition of gotoxy function//
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
