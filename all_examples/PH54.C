/*Pointers with two Dimensional Array*/
#include<stdio.h>
main()
{
int *a[3][3],i,j,r,c;
clrscr();
printf("Enter r,c value");
scanf("%d%d",&r,&c);
printf("\nEnter %dX%d elements",r,c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",*(a+i)+j,(a+i)+j);
}
}
printf("\nThe Numebrs are\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%5d %u",*(*(a+i)+j),*(a+i)+j);
}
printf("\n");
}
getch();
}
