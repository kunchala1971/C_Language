//structures with in the structures
#include<stdio.h>
main()
{
struct
{
int code;
char name[20];
char course[20];
	struct
	{
	char area[20];
	char city[20];
	char state[20];
	}add;
}stu;
clrscr();
printf("\nEnter Code Name Course");
scanf("%d",&stu.code);
scanf("%s",stu.name);
scanf("%s",stu.course);
printf("\nEnter Area City State");
scanf("%s",stu.add.area);
scanf("%s",stu.add.city);
scanf("%s",stu.add.state);
printf("\nCode:%d\nName:%s\nCourse:%s",stu.code,stu.name,stu.course);
printf("\nArea:%s\nCity:%s\nState:%s",stu.add.area,stu.add.city,stu.add.state);
getch();
}
