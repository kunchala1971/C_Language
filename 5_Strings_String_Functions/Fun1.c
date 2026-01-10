#include <stdio.h>
#define PI 3.1416//global declaration 
//No Arguments pass but No Return values
int main()
{
 int n,i;
 printf("Enter n value");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 area();   
 }

    return 0;
}
area()
{
    float r,a;
    printf("\nEnter radius value");
    scanf("%f",&r);
    a=PI*r*r;
    printf("\n%f area is %f",r,a);
}
