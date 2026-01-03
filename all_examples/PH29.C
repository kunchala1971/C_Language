#include<stdio.h>
main()
{
char name[20],tname[20];
clrscr();
printf("\nEnter Name");
scanf("%s",name);
printf("\nName:%s",name);
printf("\nLower:%s",strlwr(name));
printf("\nUpper:%s",strupr(name));
strcpy(tname,name);
//strcpy(targetstring,sourcestring)
printf("\nTempName:%s",tname);
printf("\nReverse:%s",strrev(tname));
printf("\nLength:%d",strlen(name));
printf("\nGaru concat:%s",strcat(name," Garu"));
getch();
}