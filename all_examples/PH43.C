/*
1
12
123
1234
123
12
1
*/
#include<stdio.h>
main()
{
int i,j,n;
clrscr();
printf("Enter n value");
scanf("%d",&n);
pattern(n);
mirror_pattern(n);
getch();
}
pattern(int n)
{
int i,j;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%2d",j);
}
printf("\n");
}
}
mirror_pattern(int n)
{
int i,j;
for(i=n-1;i>=1;i--)
{
for(j=1;j<=i;j++)
{
printf("%2d",j);
}
printf("\n");
}
}