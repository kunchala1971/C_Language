//Unsolved 8
#include<stdio.h>
main()
{
int l,h,sum_even=0,sum_odd=0,i;
clrscr();
printf("Enter low and high values");
scanf("%d%d",&l,&h);
i=l;
while(i<=h)
{
if(i%2==0)
{
sum_even=sum_even+i;
}
else
{
sum_odd=sum_odd+i;
}
i++;
}
printf("\n%d...%d between even sum is %d Odd sum is %d",l,h,sum_even,sum_odd);
getch();
}
