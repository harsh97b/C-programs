#include<stdio.h>
int main()
{//SMALLEST OF THREE NUMBERS
    int a,b,c;
    printf("SMALLEST OF THREE NUMBERS\nEnter three numbers\nA=");
    scanf("%d",&a);
    printf("B=");
    scanf("%d",&b);
    printf("C=");
    scanf("%d",&c);
    if(a<b)
        {
            if(a<c)
                printf("Smallest=%d",a);
            else
                printf("Smallest=%d",c);
        }
     else
         {
            if(b<c)
                printf("Smallest=%d",b);
            else
                printf("Smallest=%d",c);
         }
}
