#include<stdio.h>
int main()
{
int BS,GS,DA,HRA;
printf("Enter Basic Salary\n");
scanf("%d",&BS);
DA=BS*0.4;
HRA=BS*0.2;
GS=BS+DA+HRA;
printf("Gross Salary is %d",GS);
return 0;
}
