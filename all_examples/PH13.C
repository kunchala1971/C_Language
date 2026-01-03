//Unsolved 6
//ld long integer
#include<stdio.h>
main()
{
long int n,fact=1,i;
clrscr();
printf("Enter n value");
scanf("%ld",&n);
i=1;
while(i<=n)
{
fact=fact*i;
i++;
}
printf("\n%ld fact is %ld",n,fact);
getch();
}
