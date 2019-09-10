#include<stdio.h>
int main()
{
int a,b,c,d,e,g;
float p;
printf("Enter marks of five subjects\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
g=a+b+c+d+e;
p=g/5.0;
printf("Aggregate=%d and Percentage=%f",g,p);
return 0;
}
