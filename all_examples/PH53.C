/*Pointers with one Dimensional Array*/
#include<stdio.h>
main()
{
int *a,i,n;
clrscr();
print("Enter n value");
scanf("%d",&n);
printf("\nEnter %d elements",n);
for(i=0;i<n;i++)
{
scanf("%d",a+i);
}
printf("\nThe Numebrs are ");
for(i=0;i<n;i++)
{
scanf("%d",*(a+i));
}
getch();
}
