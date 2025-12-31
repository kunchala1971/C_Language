//do while program example
#include <stdio.h>
int main()
{

    int amount,total_amount=0;
    do{
        printf("\nEnter Amount");
        scanf("%d",&amount);
        if(amount>0)
        {
            total_amount=total_amount+amount;
            printf("\nCumilative Amount=%d",total_amount);
        }
    }while(amount>0);
    return 0;
}