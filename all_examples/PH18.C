//unsolved 1
#include<stdio.h>
#define PI 3.1416
main()
{
int n=6,i;
float r,area,peri;
clrscr();
for(i=1;i<=n;i++)
{
printf("\nEnter Radius value");
scanf("%f",&r);
area=PI*r*r;
peri=2*PI*r;
printf("\n%.2f radius area is %.2f and its Peri is %.2f",r,area,peri);
}
getch();
}
