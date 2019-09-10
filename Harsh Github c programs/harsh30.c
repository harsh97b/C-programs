#include<stdio.h>
#include<conio.h>
int rev(int n)
{int m;
m=n;
for(m=m;(m/10)!=0;m=m/10)
{m=m;
}
rev(n/10);
return m;
}

int main()
{
int n;
printf("enter number=");
scanf("%d",&n);
rev(n);
}
