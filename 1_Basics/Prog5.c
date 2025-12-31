//4.Simple Interest Calculation(pnr/100)
#include <stdio.h>
int main()
{
    float capital,intrest_rate,no_of_years,simple_intreset,si;
    printf("Enter Capital");
    scanf("%f",&capital);
    printf("Enter Intreset Rate");
    scanf("%f", & intrest_rate);
    printf("Enter No of Years");
    scanf("%f",&no_of_years);
    si=(capital*intrest_rate*no_of_years)/100;
    printf("\nCapital:%.2f",capital);
    printf("\nInterest Rate:%.2f",intrest_rate);
    printf("\nNo of Years:%.2f",no_of_years);
    printf("\nSimple Interest on above data:%.2f",si);
    return 0;
}