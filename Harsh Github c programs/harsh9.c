#include<stdio.h>
int main()
{/*
   65
   6566
   656667
   65666768  */
int n,i,j,a;
printf("Enter line number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%d",64+j);
    }
    printf("\n");
}
}
