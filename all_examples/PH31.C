#include<stdio.h>
main()
{
int n,i;
clrscr();
printf("Enter n value");
scanf("%d",&n);
i=1;
A:
printf("\n%dX%d=%d",n,i,n*i);
i++;
if(i<=10)
{
goto A;
}
getch();
}
