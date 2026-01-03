/*pointers Arithmatic*/
#include<stdio.h>
main()
{
int a,b,*p,*q;
clrscr();
printf("Enter a,b values");
scanf("%d%d", &a,&b);
p=&a;
q=&b;
printf("\nA+B=%d",*p+*q);
printf("\nA-B=%d",*p-*q);
printf("\nAXB=%d",*p*(*q));
printf("\nA/B=%d",*p/(*q));
printf("\nA/B=%d",*p%(*q));

getch();
}

