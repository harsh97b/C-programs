#include<stdio.h>
int main()
{
int a,b,c,x,y,z,n;
printf("Enter the amount\n");
scanf("%d",&n);
x=n%100;
a=(n-x)/100;
y=x%50;
b=(x-y)/50;
z=y%10;
c=(y-z)/10;
printf("Rs100 notes=%d  Rs50 notes=%d  Rs10 notes=%d",a,b,c);
return 0;
}
