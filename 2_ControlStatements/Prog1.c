#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age");
    scanf("%d",&age);
    //printf("%s",age>17 ? "Eligible" : "Not Eligible");
    if(age>17)
      printf("Eligible");
    else
      printf("Not Eligible");

    return 0;
}
// we can also write in simple format in below style also
// no need Brace Brackets if your using after if one statement after else one statement other wise you should place brackets 
// #include <stdio.h>
// int main()
// {
//     int age;
//     printf("Enter Age");
//     scanf("%d",&age);
//     //printf("%s",age>17 ? "Eligible" : "Not Eligible");
//     if(age>17) printf("Eligible");
//     else printf("Not Eligible");
//     return 0;
// }