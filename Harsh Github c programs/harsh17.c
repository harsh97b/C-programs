#include<stdio.h>
int main()
{//LARGEST 0F N NUMBERS
    int num[100000],i,n,max;
    printf("LARGEST 0F N NUMBERS\nHow many numbers do you want to enter.\n");
    scanf("%d",&n);
    printf("Enter %d numbers.\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    max=num[0];
    for(i=1;i<n;i++)
    {
        if(max<num[i])
        {
            max=num[i];
        }
    }
    printf("Largest=%d",max);
}
