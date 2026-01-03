#include<stdio.h>
main()
{
char pass[10],rpass[10];
int count=0,result;
clrscr();
do
{
printf("\nEnter Password  : ");
scanf("%s",pass);
printf("\nRetype Password : ");
scanf("%s",rpass);
result=strcmp(pass,rpass);
if(result==0)
{
printf("Password Success");
}
else{
printf("Password Does't Match. Try again !");
}
count++;
}while(count<3);
if(result!=0)
{
printf("\nYour Attempts is completed , Please try after 24 Hours");
}
getch();
}

