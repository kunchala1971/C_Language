
#include <stdio.h>

int main()
{
int a,b,*p,*q;
printf("Enter a,b values");
scanf("%d%d",&a,&b);
printf("\nA=%d B=%d",a,b);
p=&a;
q=&b;
printf("\nA=%d B=%d ",p,q);
printf("\nP=%d Q=%d ",&p,&q);
printf("\nA=%d B=%d ",*p,*q);
printf("\nA=%d B=%d ",&a,&b);
printf("\nP=%d Q=%d ",p,q);

    return 0;
}
