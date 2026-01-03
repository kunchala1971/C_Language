//w.a.p to read caital,intrate,noofyears and calculat simple interest
#include<stdio.h>
main()
{
float capital,intrate,noofyears,si;
clrscr();
printf("\nEnter Capital Amount");
scanf("%f",&capital);
printf("\nEnter Interest Rate");
scanf("%f",&intrate);
printf("\nEnter No of Years");
scanf("%f",&noofyears);
si=(capital*intrate*noofyears)/100;
printf("\nCapital:%.2f",capital);
printf("\nInterest Rate:%.2f",intrate);
printf("\nNo ofYears:%.2f",noofyears);
printf("\nSimple Interest:%.2f",si);
printf("\nTotal Amount:%.2f",capital+si);
getch();
}
