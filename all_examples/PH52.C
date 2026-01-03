/*call by referce*/
#include<stdio.h>
main()
{
int a,b;
clrscr();
printf("Enter a,b values");
scanf("%d%d",&a,&b);
printf("\nA=%d B=%d",a,b);
swap(&a,&b);
printf("\nA=%d B=%d",a,b);
getch();
}
swap(int *a,int *b)
{
int *temp;
*temp=*a;
*a=*b;
*b=*temp;
}
