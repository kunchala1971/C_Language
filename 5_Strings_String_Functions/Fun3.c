#include <stdio.h>
#define PI 3.1416//global declaration 
//Arguments pass but No Return values
int main()
{
 float r;
 int n,i;
 printf("Enter n value");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 printf("\nEnter radius value");
 scanf("%f",&r);
 area(r);   
 }

    return 0;
}
area(r)
float r;
{
    float a;
    a=PI*r*r;
    printf("\n%f area is %f",r,a);
}
