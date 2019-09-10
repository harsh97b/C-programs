#include<stdio.h>
int main()
{//SMALLEST 0F N NUMBERS
    int num[100000],i,n,small;
    printf("SMALLEST 0F N NUMBERS\nHow many numbers do you want to enter.\n");
    scanf("%d",&n);
    printf("Enter %d numbers.\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    small=num[0];
    for(i=1;i<n;i++)
    {
        if(small>num[i])
        {
            small=num[i];
        }
    }
    printf("Smallest=%d",small);
}
