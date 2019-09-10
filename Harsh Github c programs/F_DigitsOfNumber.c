#include<stdio.h>
int DigitsOfNumber(int *p,int n);
int main()
{
    int i,b,n,a[20];
    printf("Enter a number\nn=");// let maximun digits in a number be 20
    scanf("%d",&n);
    b=DigitsOfNumber(a,n);
    for(i=0;i<b;i++)
        printf("%d",a[i]);
}
int DigitsOfNumber(int *a,int n)
{
    int i;
    for(i=0;n!=0;i++,n=n/10)
        a[i]=n%10;
    printf("\nNumber of digits in the the given number=%d\n",i);
    return i;
}
