
#include <stdio.h>

int main()
{
 int mat[5][5],r,c,i,j;
 printf("Enter row and columns values");
 scanf("%d%d",&r,&c);
 printf("Enter %dX%d Matrix values",r,c);
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     {
         scanf("%d",&mat[i][j]);
     }
 }
  printf("\nThe Matrix is \n");
   for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     {
         printf("%3d",mat[i][j]);
     }
     printf("\n");
 }
    return 0;
}