#include<stdio.h>
#include<conio.h>
void main()
{
	int per;
	clrscr();
	printf("Enter Your Percentage : ");
	scanf("%d",&per);
	if(per>=80)
	{
		printf("You Have Scored A+ Grade");
	}
	else
	{
		if(per>=60)
		{
			printf("You have Scored A Grade");
		}
		else
		if(per>=50)
		{
			printf("You Have Scored B+ Grade");
		}
		else
		if(per>=33)
		{
			printf("Just Passed");
		}
		else
		{
			printf("Better Luck Next Time , Try Again");
		}
	}
	getch();
}