#include<stdio.h>
float fact(int fn);
void main()
{
    float s;
    s=fact(4);
    printf("%f",s);
}
float fact(int fn)
{
    int i,ft=1;
    for(i=1;i<=fn;i++)
    ft=ft*i;
    return ft;
}
