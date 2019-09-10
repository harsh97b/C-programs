#include<stdio.h>
int main()
{//AVERAGE OF N NUMBERS
    int num[100000],i,sum=0,n;
    float avg;
    printf("AVERAGE OF N NUMBERS\nHow many numbers do you want to enter.\n");
    scanf("%d",&n);
    printf("Enter %d numbers.\n",n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    avg=(float)sum/n;
    printf("%f",avg);
}
