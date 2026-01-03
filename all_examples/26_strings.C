//how to print string in reverse with out functions
#include<stdio.h>
main()
{
char name[20];
int i,j;
clrscr();
printf("Enter Name");
scanf("%s",name);
printf("\nName:%s",name);
i=0;
while(name[i]!='\0')
{
i++;
}
printf("\n");
for(j=i-1;j>=0;j--)
{
printf("%c",name[j]);
}
printf("\nThe String Length is %d",i);
getch();
}
