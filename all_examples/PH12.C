//w.a.p to print multiple tables 4..8
#include<stdio.h>
main()
{
int min=4,max=8,i;
clrscr();
/*
int min,max,i;
clrscr();
printf("\nEnter min and max values");
scanf("%d%d",&min,&max);
*/
while(min<=max)
{
	i=1;
	while(i<=10)
	{
	printf("\n%dX%d=%d",min,i,min*i);
	i++;
	}
	getch();
min++;
}
}
