#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("Enter Value Of X = ");
	scanf("%d",&x);
	printf("Enter Value Of Y = ");
	scanf("%d",&y);
	if(x<y)
	{
		printf("The Value Of X Is Min.");
	}
	else
	{
		printf("The Value Of Y Is Min.");
	}
	getch();
}