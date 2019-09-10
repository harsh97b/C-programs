#include<stdio.h>
//SIN X= x-x^3/3!+x^5/5!-
float sinx(float x,int n);
float power(float a,int b);
int fact(int fn);
void main()
{
    float s,x;
    int n;
    printf("Enter x and number of terms n to calculate sin x\nx=");
    scanf("%f",&x);
    printf("n=");
    scanf("%d",&n);
    while(n<0)  // if n is negative
        {
            printf("\nEnter positive value of n(number of terms).\nn=");
            scanf("%d",&n);
        }
    s=sinx(x,n);
    printf("\nSin %f = %f",x,s);
}
float sinx(float x,int n)
{
    float s;
    if(n==0)
        return 0;
    else
        if(n>0)
        {
            //this below comment line is to print value of each variable at every point
            //printf("\nx=%f n=%d 2*n-1=%d power=%f power(-1)=%f final=%f\n",x,n,2*n-1,power(x,2*n-1),power(-1,n+1),((power(x,2*n-1))*(power(-1,n+1))/fact(2*n-1)),x,n);
            s=sinx(x,n-1)+((power(x,2*n-1))*(power(-1,n+1))/fact(2*n-1));
            return s;
        }
}
float power(float a,int b)
{
    float pw=1;
    if(b>0)
    {
        for(;b>0;b--)
            pw=pw*a;
        return pw;
    }
    else
        if(b==0)
        return 1;
    else
    {
        b=-b;
        for(;b>0;b--)
            pw=pw*a;

        return 1/pw;
    }
}
int fact(int fn)
{
    int i,ft=1;
    for(i=1;i<=fn;i++)
    ft=ft*i;
    return ft;
}
