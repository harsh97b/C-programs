#include<stdio.h>
int main()
{char c;
int n,d,i;
do
{//to exit press any key other then enter key after the result or (enter key to check again)
scanf("%d",&n);
        n==2?printf("Prime "):printf("");
        n==1?printf("Not Prime"):printf("");
        for(i=n-1;i>=2;i--)
            {
                d=n%i;
                d==0?(i=0,printf("Not Prime")):printf("");
                i==2?i=0,printf("Prime"):printf("");
            }
            fflush(stdin);
            scanf("%c",&c);
}while(c==10);
}
