#include<stdio.h>
int main()
{//QUADRATIC EQUATION
    int a,b,c,k,D;
    float d,r,s,n=0.0001;
    printf("QUADRATIC EQUATION\nEnter the quadratic equation as ax²+bx+c\na=");scanf("%d",&a);
    printf("b=");scanf("%d",&b);
    printf("c=");scanf("%d",&c);
    D=b*b-4*a*c;
    if(D<0)
        {k=-D;}//this to get the absolute value of D
    else
        {k=D;}
    for(d=0;d<k;d=d+n) //program to find square root
        {
            if((d*d)>k)// This if() is used to calculate the final value as soon as the square of the number exceeds
            {
                d=d-n;
                break;
            }
        }
    if(D<0)
    {
        printf("Imaginary roots");
        r=(-b)/(2.0*a);
        s=(d)/(2.0*a);
        printf("\nroot1=%.3f+i%.3f\nroot2=%.3f-i%.3f",r,s,r,s);
    }
    else
        if(D==0)
    {
        printf("Real & Equal roots");
        r=(-b)/(2.0*a);
        printf("\nroot=%.3f",r);
    }
    else
        if(D>0)
    {
        printf("Real & Distinct roots");
        r=(-b+d)/(2.0*a);
        s=(-b-d)/(2.0*a);
        printf("\nroot1=%.3f\nroot2=%.3f",r,s);
    }

}
