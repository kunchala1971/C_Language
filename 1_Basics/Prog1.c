//Single Chracter Input and Ouput Example
#include <stdio.h>

int main()
{
    char c; //declaration of variable
    printf("Enter any character "); //output statement
    c=getchar(); //input statement for character
    printf("The Given Character is ");
    putchar(c); //output statement for character
    return 0;
}