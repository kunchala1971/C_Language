#include<stdio.h>
main()
{
int a,b,s;
clrscr();
B:
printf("Enter any two numbers");
scanf("%d%d",&a,&b);
A:
clrscr();
printf("\n1.Addition");
printf("\n2.Subtraction");
printf("\n3.Mulitiplicaton");
printf("\n4.Division");
printf("\n5.Remainder");
printf("\n6.You want take new inputs");
printf("\n7.Exit");
printf("\nEnter your choice : ");
scanf("%d",&s);
switch(s)
{
case 1:
printf("\nA+B=%d",a+b);
//break;
getch();
goto A;
case 2:
printf("\nA-B=%d",a-b);
//break;
getch();
goto A;
case 3:
printf("\nAXB=%d",a*b);
//break;
getch();
goto A;
case 4:
printf("\nA/B=%d",a/b);
//break;
getch();
goto A;
case 5:
printf("\nA mod B=%d",a%b);
//break;
getch();
goto A;
case 6:
goto B;
//case 7:
default:
printf("\nExit");
}
getch();
}

