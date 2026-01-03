//No Arguments pass and Return value
#include<stdio.h>
main()
{
int n,i;
float r,a,area();
clrscr();
printf("Enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=area();
printf(" area is %.2f",a);
}
getch();
}
float area()
{
float pi=3.1416,a,r;
printf("\nEnter radius value");
scanf("%f",&r);
printf("\n%.2f",r);
a=pi*r*r;
return(a);
}