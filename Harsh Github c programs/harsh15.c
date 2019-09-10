#include<stdio.h>
int main()
{//MULTIPLE OF 3
    int num[10],i;
    printf("Enter 10 numbers to get multiple of 3 between them.\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<10;i++)
    {if(num[i]%3==0)
        printf("%d\n",num[i]);
    }
}

