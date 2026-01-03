//array unsolved 2
#include<stdio.h>
#define SIZE 5
main()
{
int a[SIZE],i;
clrscr();
printf("\nEnter %d elements",SIZE);
for(i=0;i<SIZE;i++)
{
scanf("%d",&a[i]);
}
printf("\nThe Numbers are ");
for(i=0;i<SIZE;i++)
{
printf("%3d",a[i]);
}
getch();
}

