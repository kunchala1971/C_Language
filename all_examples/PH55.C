#include<stdio.h>
FILE *fp;
main()
{
char fname[11],c;
clrscr();
printf("\nEnter your filename");
scanf("%s",fname);
fp=fopen(fname,"w");
while((c=getchar())!=EOF)
{
putc(fp,c);
}
fclose(fp);
printf("\nFile Successfully Created");
getch();
}