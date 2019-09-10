#include<stdio.h>
int main()
{//MAXIMUM OF TWO NUMBERS
    int a,b;
    printf("MAXIMUN OF TWO NUMBERS\nEnter two numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
        printf("%d is maximum",a);
    else
        printf("%d is maximum",b);
}
