#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("Please Enter A Number Of Your Choice X = ");
	scanf("%d",&x);
	printf("Please Enter A Number Of Your Choice Y = ");
	scanf("%d",&y);
	printf("Please Enter A Number Of Your Choice Z = ");
	scanf("%d",&z);
	(x>y) ? printf("X is Greater") : (y>z) ? printf("Y Is Greater") : (x>z) ? printf("X Is Greater") : printf("Z Is Greater");
	getch();
}