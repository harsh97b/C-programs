#include<stdio.h>
int main()
{
int tsp,tp;
float cp;
printf("Enter Total Selling Price=");
scanf("%d",&tsp);
printf("Enter Total Profit=");
scanf("%d",&tp);
cp=(tsp-tp)/15.0;
printf("Cost Price is %f",cp);
return 0;
}
