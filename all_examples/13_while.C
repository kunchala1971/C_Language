//Unsolved 7
#include<stdio.h>
main()
{
int l,w,area,peri;
clrscr();
printf("\nEnter l,w values");
scanf("%d%d",&l,&w);
while(l>0 && w>0)
{
area=l*w;
peri=2*(l+w);
printf("\nl=%d w=%d its area is %d and its peri is %d",l,w,area,peri);
printf("\nEnter l,w values");
scanf("%d%d",&l,&w);
}
getch();
}
