/***********************************************************************
                            The Following program contains how
                            we can implement goto function
************************************************************************/


#include<stdio.h>
#include<conio.h>
#include<windows.h>
void gotoxy(short x,short y);
void gotoxy(short x,short y)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
int main()
         {
            int x,y;
           x=10;
           y=19;
           goto(x,y);
         }
