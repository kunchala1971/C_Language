//w.a.p to read and print two dimensional array
#include<stdio.h>
main()
{
int a[10][10],r,c,i,j;
clrscr();
printf("\nEnter r, c values");
scanf("%d%d",&r,&c);
printf("\nEnter %dX%d Matrix",r,c);
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
 scanf("%d",&a[i][j]);
 }
}
printf("\nThe Matrix is \n");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
 printf("%3d",a[i][j]);
 }
 printf("\n");
}
getch();
}