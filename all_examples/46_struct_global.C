/*Structure with arrays*/
#include<stdio.h>
struct Vehicle
{
char name[20];
char model[20];
char mafg[20];
long int price;
int milage;
}
main()
{
struct Vehicle veh[20];
int n,i;
clrscr();
printf("Enter how many vehicles details you want read");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter %d Vehicle Details",i+1);
printf("\nEnter Vehicle Name");
scanf("%s",veh[i].name);
printf("\nEnter Model Name");
scanf("%s",veh[i].model);
printf("\nEnter Mafg Name");
scanf("%s",veh[i].mafg);
printf("\nEnter Price");
scanf("%ld",&veh[i].price);
printf("\nEnter Milage");
scanf("%d",&veh[i].milage);
}
printf("\nVehicle details \n");
for(i=0;i<n;i++)
{
printf("\nName:%s",veh[i].name);
printf("\nModel:%s",veh[i].model);
printf("\nMfg:%s",veh[i].mafg);
printf("\nPrice:%ld",veh[i].price);
printf("\nMilage:%d",veh[i].milage);
}
getch();
}