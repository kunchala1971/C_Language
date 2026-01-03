//Arguments pass No Return value
#include<stdio.h>
main()
{
int n,i;
float r;
clrscr();
printf("Enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\nEnter Radius value");
scanf("%f",&r);
area(r);
}
getch();
}
area(r)
float r;
{
float pi=3.1416,a;
a=pi*r*r;
printf("\n%.2f area is %.2f",r,a);
}