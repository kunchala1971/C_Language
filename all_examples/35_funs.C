#include<stdio.h>
main()
{
char name[20],area[20],city[20];
clrscr();
printf("Enter Name");
scanf("%s",name);
printf("Enter Area");
scanf("%s",area);
printf("Enter City");
scanf("%s",city);
printLine(20);
printf("\nName:%s",name);
printLine(20);
printf("\nArea:%s",area);
printLine(20);
printf("\nCity:%s",city);
printLine(20);
getch();
}

printLine(int size)
{
int i=1;
printf("\n");
for(i=1;i<=size;i++)
{
printf("-");
}
}