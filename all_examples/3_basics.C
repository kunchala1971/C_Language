//W.A.P to read radius and print its area and perimeter
#include<stdio.h>
#define PI 3.1416
main()
{
float r,area,peri;
clrscr();
printf("Enter radius value");
scanf("%f",&r);
area=PI*r*r;
peri=2*PI*r;
printf("\n%.2f area is %.2f",r,area);
printf("\n%.2f Perimeter is %.2f",r,peri);
getch();
}
