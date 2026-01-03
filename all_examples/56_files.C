#include<stdio.h>
FILE *fp;
struct Employee
{
int code;
char name[20];
long int salary;
}
main()
{
struct Employee emp;
char fname[11];
clrscr();
printf("Enter your file name");
scanf("%s",fname);
fp=fopen(fname,"w");
do
{
printf("\nEnter Code");
scanf("%d",&emp.code);
if(emp.code>0)
{
printf("\nEnter Name and Salary");
scanf("%s",emp.name);
scanf("%ld",&emp.salary);
fprintf(fp,"\n%-5d%-20s%-10ld",emp.code,emp.name,emp.salary);
}
}while(emp.code>0);
fclose(fp);
getch();
}

