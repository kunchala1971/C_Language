//w.a.p to read 3 subjects marks and print result(all subjects must be reach 34 and grading)
#include<stdio.h>
main()
{
int m,p,c,avg;
clrscr();
printf("Enter m,p,c marks");
scanf("%d%d%d",&m,&p,&c);
avg=(m+p+c)/3;
if((m>34 && m<=100) && (p>34 && p<=100) && (c>34 && c<=100))
{
 if(avg>34 && avg<50)
 {
 printf("Ordinary");
 }
 else if(avg>=50 && avg<60)
 {
 printf("Second");
 }
 else if(avg>=60 && avg<75)
 {
 printf("First");
 }
 else if(avg>=75)
 {
 printf("Distinction");
 }
}
else
{
if(m<35 || p<35 || c<35)
{
if(m<35) printf("\nMaths Failed");
if(p<35) printf("\nPhysics Failed");
if(c<35) printf("\nChemistry Failed");
}
else
{
printf("Something Going wrong");
}
}
getch();
}

