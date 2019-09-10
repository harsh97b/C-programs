#include<stdio.h>
void convfromdecimal(int n,int base);
int DigitsOfNumber(int *a,int n);
int main()
{//Number Conversion Application
    int i,j,n,num,givbase,desbase,a[19],pow,sum=0,b[20],digits;//b[20] is to hold the digits of the entered number
        {//for upper output design
            for(i=0;i<65;i++)     //65 stars will print
            printf("*");
            printf("\n               ***Number Conversion Application***\n");
            for(i=0;i<65;i++)
            printf("*");
        }
    printf("\n\nEnter a number: ");
    scanf("%d",&num);
    do  {
            {//separating digits of the number num
                digits=DigitsOfNumber(b,num);
                //printf("\nDigits=%d",digits);
            }
            printf("\nEnter Given Base: ");
            scanf("%d",&givbase);
            {//if nonzero or negative value of given base
                while(givbase<=0)
                {
                    printf("Please enter positive nonzero number for base!\nEnter Given Base: ");
                    scanf("%d",&givbase);
                }
            }
            {//checking whether the num entered is in the given base or not
                for(i=0;i<digits;i++)
                {
                    if(b[i]>=givbase)
                    break;
                }
                if(i!=digits)
                    printf("\nWrong base entered. Above number is not in base %d . Please enter correct base\n",givbase);
            }
        }while(i!=digits);
    printf("\nEnter Destination Base: ");
    scanf("%d",&desbase);
        {//if nonzero or negative value of destination base
            while(desbase<=0)
            {
                printf("Please enter positive nonzero number for base!\nEnter Destination Base: ");
                scanf("%d",&desbase);
            }
        }
    if(givbase!=10)
    {//method to convert from any base to base 10
        n=num;
        for(i=0;n!=0;i++,n=n/10)
        {
            pow=1;
            for(j=1;j<=i;j++)
            {
                pow=pow*givbase;
            }
            a[i]=n%10;
            sum=sum+a[i]*pow;
        }
    }
    else
    {
        sum=num;
    }
        {//for  lower output design
              printf("\n");
            for(i=0;i<65;i++)
            printf("_");
            printf("\n                       ");
            printf("Conversion Result:\n");
            for(i=0;i<65;i++)
            printf("_");
            printf("\n");
        }
    printf("Given Base:%8d        Destination Base:%8d\n%19d        ",givbase,desbase,num);//8 spaces and 8 spaces
    convfromdecimal(sum,desbase);
    printf("\n");
        {//for lower output design
            for(i=0;i<65;i++)
            printf("_");
            printf("\n");
            for(i=0;i<65;i++)
            printf("_");
        }
}
void convfromdecimal(int n,int base)
{
    int num;
    if(n!=0)
    {
        num=n%base;
        n=(n-num)/base;
        convfromdecimal(n,base);
        if(num>9)
            printf("%c",num+55);
        else
        printf("%d",num);
    }
}
int DigitsOfNumber(int *a,int n)
{
    int i;
    for(i=0;n!=0;i++,n=n/10)
        a[i]=n%10;
    //printf("\nNumber of digits in the the given number=%d\n",i);
    return i;
}
