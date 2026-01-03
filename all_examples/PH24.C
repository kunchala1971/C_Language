//array unsolved 3
#include<stdio.h>
main()
{
int even[10],odd[10],ev=0,od=0,i;
clrscr();
for(i=1;i<=20;i++)
{
 if(i%2==0)
 {
 even[ev]=i;
 ev++;
 }
 else
 {
 odd[od]=i;
 od++;
 }
}
printf("\nOdd Even Numbers\n");
for(i=0;i<10;i++)
{
printf("\n%5d%5d",odd[i],even[i]);
}
getch();
}
