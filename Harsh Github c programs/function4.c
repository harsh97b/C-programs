#include<stdio.h>
float AreaCircle(float r);
int ASCIIvalues();
float AreaCircle(float r)
{   float a;
    a=3.14*r*r;
    return(a);
}
int ASCIIvalues()
{
    char c;
    printf("Enter a character to find its ASCII value\n");
    scanf("%c",&c);
    return(c);
}
int main()
{    printf("\n%d",ASCIIvalues());
     printf("\n%d",AreaCircle(2));
}
