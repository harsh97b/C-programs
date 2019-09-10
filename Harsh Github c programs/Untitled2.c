#include<stdio.h>
void convfromdecimal(int n,int base)
{
    int num;
    if(n!=0)
    {
        num=n%base;
        n=(n-num)/base;
        convfromdecimal(n,base);
        printf("%d",num);
    }
}
int main()
{
    int n,b;
    scanf("%d%d",&n,&b);
    convfromdecimal(n,b);
}
