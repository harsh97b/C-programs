#include <stdio.h>
int main()
{int i,j,k,n;
printf("Enter line number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
            {
                printf(" ");
            }
        for(k=1;k<(i*2);k++)
            {
                printf("*");
            }
        printf("\n");
    }
for(i=n-1;i>=1;i--)
    {
        for(j=n;j>i;j--)
            {
                printf(" ");
            }
        for(k=1;k<(i*2);k++)
            {
                printf("*");
            }
        printf("\n");
    }
return 0;
}
