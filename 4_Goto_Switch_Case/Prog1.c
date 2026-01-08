
#include <stdio.h>

int main()
{
int n,i;
printf("Enter n value");
scanf("%d",&n);
i=1;
A:
printf("\n%dX%d=%d",n,i,n*i);
i++;
if(i<=10) goto A;

    return 0;
}