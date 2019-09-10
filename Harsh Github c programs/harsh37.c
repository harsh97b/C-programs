#include<stdio.h>
#include<conio.h>
int freqchar(char *s,char e)
{
    int f=0,i=0;
    while(s[i]!='\0')
    {
        if(s[i]==e)
        {
            f++;
        }
        i++;
    }
    return f;
}
void main()
{
    int e,m,f,a,b;
    char name[100];
    printf("To find frequency of characters in a word.\n\n\nEnter word = ");
    gets(name);
    printf("\n\nCharacter  Frequency");
    for(e=65,m=97;e<=90;e++,m++)
    {
        a=freqchar(name,e);
        b=freqchar(name,m);
        f=a+b;
        printf("\n\n    %c         %d",e,f);
    }

}
