#include<stdio.h>
int main()
{//ARITHMETIC OPERATION BASED ON SOME CONDITIONS
    int a,b;
    printf("ARITHMETIC OPERATION BASED ON SOME CONDITIONS\nEnter two numbers\nA=");
    scanf("%d",&a);
    printf("B=");
    scanf("%d",&b);
    if(a==0||b==0)
        printf("Wrong Entry");
    else
        if(a==b)
            {
                a=a-b;
                printf("%d",a);
            }
        else
            if(a>b)
                {
                    a=a*b;
                    printf("%d",a);
                }
            else
                {
                    a=a+b;
                    printf("%d",a);
                }
}
