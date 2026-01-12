#define PI 3.1416//global declaration 
//Arguments pass but No Return values
int main()
{
 float r;
 printf("Enter radius value");
 scanf("%f",&r);
 area(r);
    return 0;
}
area(r)
float r;
{
    float a;
    a=PI*r*r;
    printf("\n%f area is %f",r,a);
}