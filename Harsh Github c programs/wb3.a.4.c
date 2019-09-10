#include<stdio.h>
int main()
{
int a,b,c,d,e,s,n;
printf("Enter a five digit number\n");
scanf("%d",&n);
e=n%10;
n=(n-e)/10;
d=n%10;
n=(n-d)/10;
c=n%10;
n=(n-c)/10;
b=n%10;
n=(n-b)/10;
a=n%10;
s=a+b+c+d+e;
printf("Sum of digits=%d",s);
return 0;
}
