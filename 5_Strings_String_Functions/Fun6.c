
#include <stdio.h>
#define PI 3.1416
//Functions with one dimensional Array

int main()
{
    int a[20],n,read_array(),display_array();
    printf("enter n value");
    scanf("%d",&n);
    read_array(a,n);
    display_array(a,n);
    
    return 0;
}
int read_array(int x[20],int size)
{
  int i;
 for(i=0;i<size;i++)
 {
     printf("\nEnter %d value",i+1);
     scanf("%d",&x[i]);
 }
return 0;
}
int display_array(int x[20],int  size)
{
    int i;
 for(i=0;i<size;i++)
 {
     printf("%2d",x[i]);
 }  
return 0;
}



