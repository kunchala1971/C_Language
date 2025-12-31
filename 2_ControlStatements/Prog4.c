//multiple table example
#include <stdio.h>
int main()
{
   int n,i;
   printf("Enter n value");
   scanf("%d",&n);
   i=1;
   while(i<=10)
   {
       printf("\n%dX%d=%d",n,i,n*i);
       i++;
   }
    return 0;
}