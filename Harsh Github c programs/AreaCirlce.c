#include<stdio.h>
int main()
{float a,r,c=1;
while(c==1)
{
    printf("Enter radius of circle=");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("Area=%f\n",a);
    printf("Press 1 if you want to perform once more time\n");
    scanf("%f",&c);
}
}
