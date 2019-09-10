#include<stdio.h>
int main()
{/*
      1
     22
    333
   4444  */
int n,i,j,k;
printf("Enter line number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(k=1;k<=n-i;k++)
    {
        printf(" ");
    }
    for(j=1;j<=i;j++)
    {
        printf("%d",i);
    }
    printf("\n");
}
}

