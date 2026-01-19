
#include <stdio.h>
//structures with arrays
struct Student
{
    int code;
    char name[20];
    char course[11];
    struct 
    {
        char area[20];
        char city[20];
        char state[20];
    }address;
};

int main()
{
    struct Student student;
    printf("Enter code name course");
    scanf("%d%s%s",&student.code,student.name,student.course);
    printf("Enter area,city,state");
    scanf("%s%s%s",student.address.area,student.address.city,student.address.state);
    printf("\nCode:%d",student.code);
    printf("\nName:%s",student.name);
    printf("\nCourse:%s",student.course);
    printf("\nArea:%s",student.address.area);
    printf("\nCity:%s",student.address.city);
    printf("\nState:%s",student.address.state);

    
    return 0;
}