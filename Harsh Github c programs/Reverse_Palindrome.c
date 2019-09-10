#include<stdio.h>
void reverse(char *p,char *q)
{
    int i,c=0;
    while(*p!='\0')
    {
        c++;p++;
    }
    for(i=0;i<c;i++)
    {
        p--;
        *q=*p;
        q++;
    }
    *q='\0';
}
void main()
{
    char str[50],rev[50],*a,*b;
    printf("Enter a string  \n");
    gets(str);
    reverse(str,rev);
    a=str;b=rev;
    while(*a!='\0')
    {
        if(*a!=*b)
            break;
        a++;b++;
    }
    if(*a=='\0')
        printf("\nIt is Palindrome.");
    else
        printf("\nIt is not Palindrome.");
}

