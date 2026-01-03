#include<stdio.h>
int main()
{
int a[10],n;
clrscr();
printf("Enter n value",n);
scanf("%d",&n);
read_array(a,n);
disp_array(a,n);
getch();
return(0);
}
read_array(int a[10],int n)
{
int i;
printf("\nEnter %d Elements",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
disp_array(int a[10],int n)
{
int i;
printf("\nThe elements are ");
for(i=0;i<n;i++)
{
printf("%5d",a[i]);
}
}
