
#include <stdio.h>

int main()
{
  int a[20],n,i,sum=0,avg;
  printf("Enter n values");
  scanf("%d",&n);
  printf("Enter %d elements",n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      sum=sum+a[i];
  }
  printf("\nThe Given Numbers are ");
  for(i=0;i<n;i++)
  {
      printf("%3d",a[i]);
  }
  printf("\nThe Above Numbers sum is %d",sum);
  avg=sum/n;
  printf("\nThe Above Numbers Average is %d",avg);
  printf("\nThe Above Average Numbers are ");
    for(i=0;i<n;i++)
  {
      if(a[i]>avg)
      {
      printf("%3d",a[i]);
      }
  }
  
    return 0;
}