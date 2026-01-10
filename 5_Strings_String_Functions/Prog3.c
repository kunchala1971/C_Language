#include <stdio.h>
#include <string.h>
int main()
{
    char name[20],copy_name[20];
    printf("Enter any Name");
    scanf("%s",name);
    strcpy(copy_name,name);
    printf("\nOriginal:%s",name);
    printf("\nUppercase:%s",strupr(name));
    printf("\nLowercase:%s",strlwr(name));
    printf("\nReverse:%s",strrev(name));
    printf("\nLength:%d",strlen(name));
    printf("\n%s",copy_name);
    printf("\n%s",strcat(copy_name," Garu"));

    return 0;
}