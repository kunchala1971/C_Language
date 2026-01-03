
//w.a.p to read a number and print that multiple table
#include<stdio.h>
main()
{
int n,i;
clrscr();
printf("Enter any number");
scanf("%d",&n);
i=1;
while(i<=10)
{
printf("%dX%d=%d",n,i,n*i);
i++;
}
getch();
}
