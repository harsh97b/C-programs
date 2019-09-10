#include<stdio.h>
int main()
{//LARGEST OF N NUMBERS
int n,m,i,j;
char c;
printf("LARGEST OF N NUMBERS\nEnter a number.\n");
scanf("%d",&m);
printf("Do you want to enter more numbers? (Y/N)\0n");
for(i=0;i==0;)
{
    i=1;
fflush(stdin);
scanf("%c",&c);
if(c=='Y'||c=='y'||c=='n'||c=='N')
{
    while(c=='Y'||c=='y')
    {
        printf("Enter a number.\n");
        scanf("%d",&n);
        if(m<n)
        m=n;
        printf("Do you want to enter more numbers? (Y/N)\n");
        for(j=0;j==0;)
        {
            fflush(stdin);
            scanf("%c",&c);
            if(c=='Y'||c=='y'||c=='n'||c=='N')
            {
               j=1;
            }
            else
            {
               j=0;
                printf("Please enter Y or N only.\n");
            }
        }
    }
}
else
{
    i=0;
    printf("Please enter Y or N only.\n");
}
}
printf("Biggest=%d",m);
}
