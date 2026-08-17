#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("X =  : ");
	scanf("%d",&x);
	printf("Y =  : ");
	scanf("%d",&y);
	(x>y) ? printf("X Is Greater Than Y") : printf("Y Is Greater Than X");
	getch();
}