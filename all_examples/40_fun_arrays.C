//read and display two dimensional array using functions
#include<stdio.h>
int main()
{
int a[10][10],r,c;
clrscr();
printf("Enter r,c value");
scanf("%d%d",&r,&c);
read_array(a,r,c);
disp_array(a,r,c);
getch();
return(0);
}
read_array(int a[10][10],int r,int c)
{
int i,j;
printf("\nEnter %dX%d Elements",r,c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
}
disp_array(int a[10][10],int r,int c)
{
int i,j;
printf("\nThe elements are \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%5d",a[i][j]);
}
printf("\n");
}
}
