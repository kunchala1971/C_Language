//unsolved 2
#include<stdio.h>
#define PI 3.1416
main()
{
int n,i;
float r,area,peri;
clrscr();
printf("Enter n value");
scanf("%d",&n);
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
