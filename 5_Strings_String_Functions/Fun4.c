
#include <stdio.h>
#define PI 3.1416
//arguments pass and return value
int main()
{
    float r,area,cal_area();
    int n,i;
    printf("Enter n value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter %d Radius",i);
        scanf("%f",&r);
        area=cal_area(r);
        printf("\n%f area is %f",r,area);
    }
    return 0;
}

float cal_area(r)
float r;
{
    float a;
    a=PI*r*r;
    return(a);
}

