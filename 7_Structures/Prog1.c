#include <stdio.h>
// A similar data type of information can be store into single variable is called arrays
// A different data type of elements can be store into a single variable is called structure
//Global Declration
struct Student
{
    int code;
    char name[20];
    char course[11];
};
int main()
{
    //initialization
    struct Student stu={100,"Sreee","C Language"};
    printf("\nCode:%d",stu.code);
    printf("\nName:%s",stu.name);
    printf("\nCourse:%s",stu.course);
    
    return 0;
}