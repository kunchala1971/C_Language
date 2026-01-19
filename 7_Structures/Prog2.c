
#include <stdio.h>


int main()
{
    //local declration
    //initialization
struct 
{
    int code;
    char name[20];
    char course[11];
}student={100,"Sreee","C Language"};
    
    
    printf("\nCode:%d",student.code);
    printf("\nName:%s",student.name);
    printf("\nCourse:%s",student.course);
    
    return 0;
}