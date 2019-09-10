#include<stdio.h>
int main()
{/*
       *
      ***
     *****
    *******  */
int n,i,j,a,k;
printf("Enter line number=");
scanf("%d",&n);
a=n;
for(i=1;i<=n;i++)
{a=a-1;
    for(k=1;k<=a;k++)
    {
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++)
    {
        printf("*");
    }
    printf("\n");
}
}
