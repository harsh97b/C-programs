#include<stdio.h>
#include<conio.h>
//compare equality of two strings
int MYstrlen(char *s)
{
    int c=0;
    while(*s!='\0')
    {
        c++;
        s++;
    }
    return c;
}
void main()
{
  char nam[30],name[30],*p,*q;
  printf("name : ");
  gets(name);
  printf("nam : ");
  gets(nam);
  p=name;
  q=nam;
  if(MYstrlen(name)==MYstrlen(nam))
                    {
                        while(*p!='\0')
                        {if(*p!=*q)
                            break;
                            p++;
                            q++;
                        }
                        if(*p=='\0')
                        printf("\nSame\n");
                        else
                            printf("\ndifferent\n");
                    }
                    else
                        printf("\nlength not equal\n");

}
