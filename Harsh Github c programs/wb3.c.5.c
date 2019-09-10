#include<stdio.h>
int main()
{//SUM OF DIGITS OF A NUMBER HAVING N DIGITS
    int i,n,d,sum=0;
    printf("Enter a number=");
    scanf("%d",&n);
    for(i=1;n>0;i++)
    {
        d=n%10;
        n=n/10;
        sum=sum+d;
    }
    printf("%d",sum);
return 0;
}
