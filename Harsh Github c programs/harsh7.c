#include<stdio.h>
int main()
{/*
  11111
   3333
    555
     77
      9  */
int n,i,j,k;
printf("Enter line number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(k=1;k<i;k++)
    {
        printf(" ");
    }
    for(j=i;j<=n;j++)
    {
        printf("%d",i*2-1);
    }
    printf("\n");
}
}
