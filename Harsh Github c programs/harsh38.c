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
    int s,p,f;
    char name[200];
    printf("To print number of words, sentences, and paragraphs in a given text.\n\n\nEnter Text = ");
    gets(name);

    s=freqchar(name,' ');
    p=freqchar(name,'.');
    //f=freqchar(name,'\n');
    s++;
    //f++;
    printf("\n\nwords=%d\nsentence=%d\nparagraph=",s,p);


}

