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
fp=fopen(fname,"r");
while((fscanf(fp,"%d%s%ld",&emp.code,emp.name,&emp.salary))!=EOF)
{
printf("\n%-5d%-20s%-10ld",emp.code,emp.name,emp.salary);
}
fclose(fp);
getch();
}

