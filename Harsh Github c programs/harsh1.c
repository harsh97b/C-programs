#include<stdio.h>
int main()
{/*
   A
   12
   BCD
   3456
   EFGHI  */
int n,i,j,a=0,b=64;
printf("Enter line number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{if(i%2==1)
    {
        for(j=1;j<=i;j++)
        {b=b+1;
            printf("%c",b);
        }
        printf("\n");
    }
    else
    {
        for(j=1;j<=i;j++)
            {a=a+1;
                printf("%d",a);
            }
        printf("\n");
    }
}
}
