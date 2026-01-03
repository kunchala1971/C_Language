/*Local Structure*/
#include<stdio.h>
main()
{
struct
{
char name[20];
char model[10];
char mafg[20];
float price;
float milage;
}honda;/*structure varibale*/
clrscr();
printf("\nEnter Car Name");
scanf("%s",honda.name);
printf("\nEnter Model and Manufacturer Name");
scanf("%s%s",honda.model,honda.mafg);
printf("\nEnter Price and Milage");
scanf("%f%f",&honda.price,&honda.milage);
printf("\nName:%s",honda.name);
printf("\nModel:%s",honda.model);
printf("\nMfg:%s",honda.mafg);
printf("\nPrice:%.2f",honda.price);
printf("\nMilage:%.2f",honda.milage);
getch();
}