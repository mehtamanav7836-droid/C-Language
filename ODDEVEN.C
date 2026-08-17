#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	clrscr();
	printf("Enter Any Number : ");
	scanf("%d",&r);
	if(r%2==0)
	{
	printf("Your Answer Is Even");
	}
	else
	{
		printf("Your Answer Is Odd");
	}
	getch();
}