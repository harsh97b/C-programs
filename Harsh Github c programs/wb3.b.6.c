#include<stdio.h>
int main()
{//DISCOUNT ON PURCHASE
    float q,p,d,tc;
    printf("DISCOUNT ON PURCHASE\nEnter Quantity=");
    scanf("%f",&q);
    printf("Price per item=");
    scanf("%f",&p);
    d=q*p*0.1;
    tc=q*p-d;
    if(q>100||tc>5000)
        d=d+tc*0.1;
    printf("Discount=%f",d);
}
