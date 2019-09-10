#include<stdio.h>
int main()
{//ABSOLUTE VALUE OF A NUMBER
    int n;
    printf("ABSOLUTE VALUE OF A NUMBER\nEnter number=");
    scanf("%d",&n);
    if(n<0)
        n=n*-1;
    printf("%d",n);
}
