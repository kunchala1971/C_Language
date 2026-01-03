//do while Example
#include<stdio.h>
main()
{
int l,w,area,peri;
clrscr();
do{
printf("\nEnter l,w values");
scanf("%d%d",&l,&w);
area=l*w;
peri=2*(l+w);
printf("\nl=%d w=%d its area is %d and its peri is %d",l,w,area,peri);
}while(l>0 && w>0);
getch();
}
