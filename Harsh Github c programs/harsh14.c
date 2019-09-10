#include<stdio.h>
int main()
{//ARRAY STORING VALUES
    int num[10],i;
    printf("Enter 10 numbers.\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",num[i]);
    }
}
