#include <stdio.h>

int main()
{
int min,max,i;
printf("Enter min,max value");
scanf("%d%d",&min,&max);

A:   i=1;
B:   printf("\n%dX%d=%d",min,i,min*i);
     i++;
     if(i<=10) goto B;
C:   min++;
     if(min%2==0) goto C;
if(min<=max) goto A;

    return 0;
}