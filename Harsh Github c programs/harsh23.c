#include<stdio.h>
int main()
{
    //ANAGRAM
    printf("Program for Anagarm\n");
    int i,j,*p;
    p=&j;
    printf("%d",p);
    char a[6],b[6],c[6],d[6];
    printf("Enter First word(5 characters exactly)");
    gets(a);
    puts(a);
    printf("Enter Second word(5 characters exactly)");
    gets(b);
    puts(b);
    for(i=0;i<6;i++)
        {
            c[i]=a[i];
            d[i]=b[i];
        }
    //SORTING OF A
    for(i=0;i<5;i++)
    {
        for(j=i;j<4;j++)
        {
            if(a[j]>a[j+1])
                {
                    a[j]=a[j]+a[j+1];
                    a[j+1]=a[j]-a[j+1];
                    a[j]=a[j]-a[j+1];
                }
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=i;j<4;j++)
        {
            if(b[j]>b[j+1])
                {
                    b[j]=b[j]+b[j+1];
                    b[j+1]=b[j]-b[j+1];
                    b[j]=b[j]-b[j+1];
                }
        }
    }
    printf("\nAfter Sorting\n");
    puts(a);
    puts(b);
    if(a[i]==b[i])
    {
        printf("\nGiven two words; %s and %s are anagram.",c,d);
    }
    else
    {
        printf("\nGiven two words; %s and %s are not anagram.",c,d);
    }
}
