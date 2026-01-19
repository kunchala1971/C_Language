
#include <stdio.h>
//structures with arrays
struct Student
{
    int code;
    char name[20];
    char course[11];
};

int main()
{
    struct Student student[20];
    int n,i;
    printf("Enter how many memeber data you want to enter");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("enter stu%d code name course",i+1);
    scanf("%d%s%s",&student[i].code,student[i].name,student[i].course); 
    }
    printf("\nCode Name               Course");
    for(i=0;i<n;i++)
    {
    printf("\n%-5d%-20s%-11s",student[i].code,student[i].name,student[i].course); 
    }
    
    return 0;
}