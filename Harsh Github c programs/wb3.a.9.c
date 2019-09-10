#include<stdio.h>
int main()
{
int a,h,m,s,n;
printf("Enter seconds=");
scanf("%d",&n);
s=n%60;
a=(n-s)/60;
m=a%60;
h=(a-m)/60;
printf("Hours:Minutes:Seconds = %d:%d:%d",h,m,s);
return 0;
}
