#include <stdio.h>
int main()
{

int n,i;
char names[30][20];
    printf("\nEnter n value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",names[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d. %s",i+1,names[i]);
    }
    return 0;
}