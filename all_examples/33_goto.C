#include<stdio.h>
main()
{
int l,h,i;
clrscr();
printf("Enter l,h value");
scanf("%d%d",&l,&h);
A:
i=1;
	B:
	printf("\n%dX%d=%d",l,i,l*i);
	i++;
	if(i<=10)
	{
	goto B;
	}
	l++;
getch();
if(l<=h)
{
goto A;
}

}
