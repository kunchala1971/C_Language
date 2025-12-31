//for loop
//we can also write using while also
#include <stdio.h>
int main()
{

    int size_of_line,i;
    printf("Enter size_of_line value");
    scanf("%d",&size_of_line);
   /* i=1;
    while(i<=size_of_line)
    {
        printf("-");
        i++;
    }*/
    for(i=1;i<=size_of_line;i++)
    {
       printf("-"); 
    }
    
    
    return 0;
}