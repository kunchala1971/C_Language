//for unsolved 3
#include<stdio.h>
main()
{
int l,h,i,sum=0,temp;
clrscr();
printf("Enter l,h values");
scanf("%d%d",&l,&h);
if(l>h)
{
temp=l;
l=h;
h=temp;
}
for(i=l;i<=h;i++)
{
sum=sum+i;
}
printf("\n%d...%d sum is %d",l,h,sum);
getch();
}
