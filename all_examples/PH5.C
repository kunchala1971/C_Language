//w.a.p to read any number, the given number is even or odd
#include<stdio.h>
main()
{
int n;
clrscr();
printf("Enter any number");
scanf("%d",&n);
if(n%2==0)
{
printf("Even Number %d",n);
}
else
{
printf("Odd Number %d",n);
}
getch();
}

