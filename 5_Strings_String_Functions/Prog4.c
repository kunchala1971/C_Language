#include <stdio.h>
#include <string.h>
int main()
{
char pwd[10],rpwd[10];
A:
printf("Enter password");
scanf("%s",pwd);
printf("Re-Type Password");
scanf("%s",rpwd);
if(strcmp(pwd,rpwd)==0)
{
    printf("Password Success");
}
else
{
    printf("Password Does't Match. Try again !");
    goto A;
}
    return 0;
}