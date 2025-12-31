//2 Data Input and output Example
#include <stdio.h>

int main()
{
    int a,b,c;
    float amount=4500.50;
    printf("Enter a,b,c values"); //prompt message
    scanf("%d",&a); //reading data
    scanf("%d",&b);
    scanf("%d",&c);
    printf("A=%d B=%d C=%d",a,b,c); //out put
    printf("\nAmount=%.2f",amount); //.2f means it shows only 2 decimals
    return 0;
}