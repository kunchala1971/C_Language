
#include <stdio.h>
struct Employee
{
    int code;
    char name[20];
    float salary;
};
int main()
{
    struct Employee emp,updateSal();
    printf("Enter employee Code Name Salary");
    scanf("%d%s%f",&emp.code,emp.name,&emp.salary);
    printf("\nCode;%d\nName:%s\nSalary:%.2f",emp.code,emp.name,emp.salary);
    emp=updateSal(emp);
    printf("\nCode;%d\nName:%s\nSalary:%.2f",emp.code,emp.name,emp.salary);

    return 0;
}
struct Employee updateSal(temp_emp)
struct Employee temp_emp;
{
    float salary;
    printf("How much salary you want add ");
    scanf("%f",&salary);
    temp_emp.salary=temp_emp.salary+salary;
    return (temp_emp);
}
