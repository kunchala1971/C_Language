

#include <stdio.h>

int main()
{

int a,b,c;
printf("Enter a,b values");
scanf("%d%d",&a,&b);
printf("\n1.Addition");
printf("\n2.Subtraction");
printf("\n3.Multiplication");
printf("\n4.Division");
printf("\n5.Modulus");
printf("\n6.Exit");
A:
printf("\nEnter your choice ..");
scanf("%d",&c);
switch(c)
{
    case 1:
    printf("\nA+B=%d",a+b);
    //break;
    goto A;
    case 2:
    printf("\nA-B=%d",a-b);
    //break;
    goto A;
    case 3:
    printf("\nAXB=%d",a*b);
    //break;
    goto A;
    case 4:
    printf("\nA/B=%d",a/b);
    //break;
    goto A;
    case 5:
    printf("\nA%B=%d",a%b);
    //break;
    goto A;
    default:
    printf("\nYour Exit the Program.");
    
}
    return 0;
}