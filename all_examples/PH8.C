//Un solved 1
#include<stdio.h>
main()
{
int min=1,max=50,sum_even=0;
clrscr();
while(min<=max)
{
if(min%2==0)
{
sum_even=sum_even+min;
}
min++;
}
printf("\n1...50 between even numbers sum %d",sum_even);
getch();
}
