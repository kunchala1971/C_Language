//4.Symbolic constants usage example
#include <stdio.h>
#define PI 3.1416
#define P printf // instead of printf you can also use P, becuase we define P as printf
#define S scanf// instead of scanf you can also use P, becuase we define S as scanf
int main()
{
    float r,area,peri;
    P("Enter radius value");
    S("%f",&r);
    area=PI*r*r;
    peri=2*PI*r;
    P("\n%.2f Radius, Area is %.2f and Its Perimeter is %.2f",r,area,peri);
    return 0;
}
