
#include <stdio.h>
#define PI 3.1416
//No arguments  and return value
int main()
{
    float area,cal_area();
    int n,i;
    printf("Enter n value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        area=cal_area();
        printf(" area is %f",area);
    }
    return 0;
}

float cal_area()
{
    float a,r;
    printf("\nEnter radius value");
    scanf("%f",&r);
    a=PI*r*r;
    printf("\n%f",r);
    return(a);
}
