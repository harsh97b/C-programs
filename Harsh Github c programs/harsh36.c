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
    int f;
    char name[100],c;
    printf("To find frequency of character in a word.\n\n\nEnter word = ");
    gets(name);
    //puts(name);
    printf("\n\nEnter character to be searched = ");
    scanf("%c",&c);
    f=freqchar(name,c);
    printf("\nFrequency of %c = %d\n",c,f);
}


