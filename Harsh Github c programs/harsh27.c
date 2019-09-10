#include<stdio.h>
int fact(int fn);
int comb(int n,int k);
//Program to calculate combination
void main()
{
    int n,k;
    printf("Program to calculate Combination\nEnter number of elements in finite set=");
    scanf("%d",&n);
    printf("Enter number of items to take from above set to calculate Combination=");
    scanf("%d",&k);
    printf("C(n,k)=%d",comb(n,k));
}
int fact(int fn)
{
    int i,ft=1;
    for(i=1;i<=fn;i++)
    ft=ft*i;
    return ft;
}
int comb(int n,int k)
{
    return (fact(n)/fact(n-k)/fact(k));
}
