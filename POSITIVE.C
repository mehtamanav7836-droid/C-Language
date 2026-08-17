#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("Enter Any Number : ");
	scanf("%d",&num);
	if(num==0)
	{
	printf("The Number Is Nuetral");
	}
	else
	{
		if(num>0)
		{
			printf("The Number Is Positive");
		}
		else
		{
			printf("The Number Is Negative");
		}
	}
	getch();
}