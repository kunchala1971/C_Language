//array unsolved 4
#include<stdio.h>
main()
{
int a[5],b[5],c[5],n=5,i;
clrscr();
printf("\nEnter A Array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter B Array elements");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
printf("\n A     B   A+B\n");
for(i=0;i<n;i++)
{
c[i]=a[i]+b[i];
printf("\n%4d%4d%4d",a[i],b[i],c[i]);
}
getch();
}

