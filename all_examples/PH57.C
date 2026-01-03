#include<stdio.h>
FILE *fp;
main()
{
char fname[11],c;
clrscr();
printf("\nEnter your filename");
scanf("%s",fname);
fp=fopen(fname,"r");
while((c=getchar())!=EOF)
{
putc(c,fp);
}
fclose(fp);
printf("\nFile Successfully Appended");
getch();
}