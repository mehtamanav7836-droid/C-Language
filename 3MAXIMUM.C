#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("Enter The Value of X : ");
	scanf("%d",&x);
	printf("Enter The Value Of Y : ");
	scanf("%d",&y);
	printf("Enter The Value Of Z : ");
	scanf("%d",&z);
	if(x>y)
	{
		if(x>z)
	{
		printf("The X Is Greater");
	}
		else
		{
			printf("Z is Max.");
		}
	}
	else
	{
		if(y>z)
		{
			printf("Y Is Greater");
		}
		else
			if(z>x)
			{
				printf("Z Is Greater");
			}
	}
	getch();
}