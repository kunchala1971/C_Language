#include<stdio.h>
main()
{
int a,b,sum;
clrscr();
/*printf("Enter a value");
scanf("%d",&a);
printf("Enter b value");
scanf("%d",&b);
*/
printf("Enter a,b values");
scanf("%d%d",&a,&b);
sum=a+b;
printf("\nA=%d B=%d Sum=%d",a,b,sum);
getch();
}