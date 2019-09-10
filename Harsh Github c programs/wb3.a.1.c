#include<stdio.h>
int main()
{
int BS;
float GS,DA,HRA;
printf("Enter Basic Salary\n");
scanf("%d",&BS);
DA=BS*0.4;
HRA=BS*0.2;
GS=BS+DA+HRA;
printf("Gross Salary is %f",GS);
return 0;
}
