#include<stdio.h>
int fact(int fn);
int perm(int n,int k);
//Program to calculate permutation
void main()
{
    int n,k;
    printf("Program to calculate permutation\nEnter number of elements in finite set=");
    scanf("%d",&n);
    printf("Enter number of items to take from above set to calculate permutation=");
    scanf("%d",&k);
    printf("P(n,k)=%d",perm(n,k));
}
int fact(int fn)
{
    int i,ft=1;
    for(i=1;i<=fn;i++)
    ft=ft*i;
    return ft;
}
int perm(int n,int k)
{
    return (fact(n)/fact(n-k));
}
