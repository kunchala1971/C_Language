//nested while loop
//example of multiple tables between range
#include <stdio.h>
int main()
{
   int low,high,i;
   printf("Enter low,high value");
   scanf("%d%d",&low,&high);
   while(low<=high)
   {
       i=1;
       while(i<=10)
       {
           printf("\n%dX%d=%d",low,i,low*i);
           i++;
       }
      low++;
       
   }
    return 0;
}