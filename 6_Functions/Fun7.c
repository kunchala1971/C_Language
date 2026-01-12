
#include <stdio.h>
#define PI 3.1416
//Functions with Two dimensional Array

int main()
{
    int a[20][20],r,c,read_array(),display_array();
    printf("enter row and column value");
    scanf("%d%d",&r,&c);
    read_array(a,r,c);
    display_array(a,r,c);
    
    return 0;
}
int read_array(int a[20][20],int r,int c)
{
  int i,j;
  printf("\nEnter %dX%d Matrix values",r,c);
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     {
         scanf("%d",&a[i][j]);
     }
     
 }
return 0;
}
int display_array(int a[20][20],int  r,int c)
{
    int i,j;
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     {
         printf("%3d",a[i][j]);
     }
     printf("\n");
     
 }
return 0;
}



