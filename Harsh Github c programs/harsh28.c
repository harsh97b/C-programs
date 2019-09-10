#include <stdio.h>
int fact(int fn);
int comb(int n,int k);
//PASCAL'S TRIANGLE
void main()
{
    int i, j, k, n;
    printf("PASCAL'S TRIANGLE\nEnter number of Lines=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {

                printf("%4d",comb(i-1,k-1));
        }
        printf("\n");
    }

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
