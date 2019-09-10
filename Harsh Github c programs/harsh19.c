#include<stdio.h>
int main()
{//ADDITION OF TWO MATRICS
    int a[50][50],b[50][50],d[50][50],i,j,r,c;
    printf("ADDITION OF TWO MATRIX\nEnter dimensions of matrix\nRow=");
    scanf("%d",&r);
    printf("Column=");
    scanf("%d",&c);
    printf("Enter elements of 1st matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            d[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nRequired matrix is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
        }
        if(i!=1)
        {
            printf("   ");
        }
        else
        {
            printf(" + ");
        }
        for(j=0;j<c;j++)
        {
            printf("%d",b[i][j]);
        }
        if(i!=1)
        {
            printf("   ");
        }
        else
        {
            printf(" = ");
        }
        for(j=0;j<c;j++)
        {
            printf("%d",d[i][j]);
        }

        printf("\n");
    }
}

