//Prime number Program model 2
#include <stdio.h>
int main()
{
    int isPrime=0,num,i;
    printf("Enter any number");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            isPrime++;
            break;
        }
    }   
    if(isPrime==0)
    {
        printf("This is Prime Number %d",num);
    }
    else
    {
        printf("This  is Not Prime Number %d",num);
    }
    return 0;
}