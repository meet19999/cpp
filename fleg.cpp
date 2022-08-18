#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	textcolor(2);
	for(i=1;i<=12;i++)
	{
		for(j=1;j<=40;j++)
		{
			if(i>0 && i<5)
			{
				textcolor(6);
				cprintf("*");
			}
			else if(i>=5 && i<9 )
			{
				textcolor(15);
				cprintf("*");
			}
			else
			{
				textcolor(2);
				cprintf("*");
			}

		}
		printf("\n");
	}
	for(i=1;i<13;i++)
	{
		for(j=1;j<4;j++)
		{
			textcolor(8);
			cprintf("|");
		}
		printf("\n");
	}
	getch();
}