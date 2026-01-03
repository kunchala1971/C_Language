#include<stdio.h>
main()
{
struct
{
int code;
char name[20];
char city[20];
}*stu;
clrscr();
printf("\nEnter Code Name City");
scanf("%d",&stu->code);
scanf("%s",stu->name);
scanf("%s",stu->city);
printf("\nCode:%d",stu->code);
printf("\nName:%s",stu->name);
printf("\nCity:%s",stu->city);
getch();
}
