
#include <stdio.h>
struct Student
{
    int code;
    char name[20];
    char course[11];
};

int main()
{
    struct Student stu1,stu2;
    printf("enter stu1 code name course");
    scanf("%d%s%s",&stu1.code,stu1.name,stu1.course);
    printf("enter stu2 code name course");
    scanf("%d%s%s",&stu2.code,stu2.name,stu2.course);
    printf("\nStudent 1 Details:");
    printf("\nCode:%d",stu1.code);
    printf("\nName:%s",stu1.name);
    printf("\nCourse:%s",stu1.course);
    printf("\nStudent 2 Details:");
    printf("\nCode:%d",stu2.code);
    printf("\nName:%s",stu2.name);
    printf("\nCourse:%s",stu2.course);
    
    return 0;
}