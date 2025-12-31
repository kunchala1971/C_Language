//while with Break statement
//if any doubt please watch my channel c language course
#include <stdio.h>
int main()
{
   int low,high,i;
   printf("Enter low,high value");
   scanf("%d%d",&low,&high);
   while(low<=high)
   {
        if(low==5)
        {
           
          break;
        }
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