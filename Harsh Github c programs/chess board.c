#include<stdio.h>
#include<conio.h>
#define checkL(x) while((x%2)!=0||x<=0)\
    {\
        printf("Please enter even non zero positive integer value : ");\
        scan(x)\
    }
#define scan(x) scanf("%d",&x);\
    fflush(stdin);
int main()
{
    int i,j,k,l,num=8,hwidth=6,vwidth=3,ahead=10,choice;//hwidth id horizontal width of 1 square, vwidth is vertical width of 1 square
    printf("____________________________________________________________________________________________\n");
    printf("------------------------------------------CHESS BOARD---------------------------------------\n");
    printf("____________________________________________________________________________________________\n\n");
    printf("1. -> Customize Chess Board                  Any other key -> Ordinary Chess Board\n: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter the number of boxes in one line : ");
        scan(num)
        checkL(num)
        printf("\nAfter how much space ahead it should be formed : ");
        scan(ahead)
        printf("\nEnter Horizontal width of One Square Box : ");
        scan(hwidth)
        checkL(hwidth)
        vwidth=hwidth/2;
    }
    else
    {

    }
    printf("\nINFORMATION\nnum=%d\nahead=%d\nhwidth=%d\nvwidth=%d\n\n",num,ahead,hwidth,vwidth);
    for(k=0;k<(ahead);k++)
    {
        printf(" ");
    }
    for(k=0;k<((hwidth*num)+2);k++)
    {
        printf("_");
    }
    printf("\n");
    num=num/2;
    for(i=0;i<num;i++)
    {

        for(l=0;l<vwidth;l++)
        {
            for(k=0;k<ahead;k++)
            {
                printf(" ");
            }
            printf("|");
            for(j=0;j<num;j++)
            {
                for(k=0;k<hwidth;k++)
                {
                    printf("\xDB");
                }
                for(k=0;k<hwidth;k++)
                {
                    printf(" ");
                }
            }
            printf("|\n");
        }

        for(l=0;l<vwidth;l++)
        {
            for(k=0;k<ahead;k++)
            {
                printf(" ");
            }
            printf("|");
            for(j=0;j<num;j++)
            {
                for(k=0;k<hwidth;k++)
                {
                    printf(" ");
                }
                for(k=0;k<hwidth;k++)
                {
                    printf("\xDB");
                }
            }
            printf("|\n");
        }
    }
    //printf("\n");
    num=num*2;
    for(k=0;k<(ahead);k++)
    {
        printf(" ");
    }
    for(k=0;k<((hwidth*num)+2);k++)
    {
        printf("\"");
    }
getch();
return 0;
}
