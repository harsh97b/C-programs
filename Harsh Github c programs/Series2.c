#include<stdio.h>
int main()
{
    int i,n,b=-1;
    float sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {

        b=b+2;
        sum=sum+(float)i/b;
    }
    printf("Sum=%f",sum);
}
