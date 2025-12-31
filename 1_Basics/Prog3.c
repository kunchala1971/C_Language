//3.Symbolic contstant Example
#include <stdio.h>
#define PI 3.1416 //this way of declaration Symbolic constants no need data type no need equal for assign
int main()
{
    float r,area,peri;
    printf("Enter radius value");
    scanf("%f",&r);
    area=PI*r*r;
    peri=2*PI*r;
    printf("\n%.2f Radius, Area is %.2f and Its Perimeter is %.2f",r,area,peri);
    return 0;
}