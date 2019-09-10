#include<stdio.h>
int main()
{/*
       1
     22 2
    33 3 3
   44 4 4 4
  55 5 5 5 5    */
int n,i,j,k;
printf("Enter line number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(k=n;k>i;k--)
    {
        printf(" ");
    }
    printf("%d",i);
    for(j=1;j<=i;j++)
    {
        printf("%d ",i);
    }
    printf("\n");
}
}


