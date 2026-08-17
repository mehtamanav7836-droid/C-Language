#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("Enter The Value Of X = ");
	scanf("%d",x);
	printf("Enter The Value Of Y = ");
	scanf("%d",y);
	printf("Enter The Value Of Z = ");
	scanf("%d",z);
	if(x>y)
	{
		printf("X Is Greater");
	}
	else
		if(y>z)
		{
			printf("Y Is Greater");
		}
		else
		{
			printf("Z Is Greater");
		}
		getch();
}