
#include <stdio.h>

int main()
{
  int a[20],n,i;
  printf("Enter n values");
  scanf("%d",&n);
  printf("Enter %d elements",n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("\nThe Elements are in Original Order ");
  for(i=0;i<n;i++)
  {
      printf("%2d",a[i]);
  }
   printf("\nThe Elements are in Reverse Order ");
    for(i=n-1;i>=0;i--)
  {
      printf("%2d",a[i]);
  }
    return 0;
}