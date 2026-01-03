#include<stdio.h>
main()
{
int a[20],n,i;
clrscr();
printf("Enter n value");
scanf("%d",&n);
printf("\nEnter %d elements",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nThe Given Numbers are\n");
for(i=0;i<n;i++)
{
printf("%3d",a[i]);
}
getch();
}
