#include<stdio.h>
FILE *fp;
main()
{
char fname[11],c;
clrscr();
printf("\nEnter your filename");
scanf("%s",fname);
fp=fopen(fname,"r");
fseek(fp,18,0);
while((c=getc(fp))!=EOF)
{
putchar(c);
}
fclose(fp);
getch();
}