//un solved 2
#include<stdio.h>
main()
{
int n,rem,sum=0;
clrscr();
printf("Enter an digits");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
sum=sum+rem;
n=n/10;
}
printf("\nThe Digits sum is %d",sum);
getch();
}