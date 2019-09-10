#include<stdio.h>
int main()
{//ADDITION OF TWO MATRICS
    int a[50][50],b[50][50],e=1,i,j,r,c,choice,k,l;
    float d[50][50];
while(e==1)
   {e=0;
    printf("\n\n\n\nOPERATION ON TWO MATRIX\nEnter dimensions of matrix\nRow=");
    scanf("%d",&r);
    printf("Column=");
    scanf("%d",&c);
    printf("Enter elements of 1st matrix\n");
    for(i=0;i<r;i++)
        {for(j=0;j<c;j++)
             scanf("%d",&a[i][j]);
        }
    printf("Enter elements of 2nd matrix\n");
    for(i=0;i<r;i++)
        {for(j=0;j<c;j++)
             scanf("%d",&b[i][j]);
        }
    printf("\nWhich operation do you want to perform?\nChoices 1.Addition  2.Subtraction  3.Multiplication  4.Division\n");
    for(k=0;k==0;)
        {k=1;
         printf("Please enter your choice=");
         scanf("%d",&choice);
         switch(choice)
         {case 1:for(i=0;i<r;i++)
                     {for(j=0;j<c;j++)
                          {d[i][j]=a[i][j]+b[i][j];}
                     }
                 printf("\nRequired matrix is\n");
                 for(i=0;i<r;i++)
                     {for(j=0;j<c;j++)
                          printf("%4d",a[i][j]);
                     if(i!=1)
                        printf("     ");
                     else
                        printf("  +  ");
                     for(j=0;j<c;j++)
                         printf("%4d",b[i][j]);
                     if(i!=1)
                        printf("     ");
                     else
                        printf("  =  ");
                     for(j=0;j<c;j++)
                         printf("%6.3f",d[i][j]);
                     printf("\n");
                     }
          break;
          case 2:for(i=0;i<r;i++)
                     {for(j=0;j<c;j++)
                          d[i][j]=a[i][j]-b[i][j];
                     }
                 printf("\nRequired matrix is\n");
                 for(i=0;i<r;i++)
                     {for(j=0;j<c;j++)
                          printf("%4d",a[i][j]);
                     if(i!=1)
                        printf("     ");
                     else
                        printf("  -  ");
                     for(j=0;j<c;j++)
                         printf("%4d",b[i][j]);
                     if(i!=1)
                        printf("     ");
                     else
                        printf("  =  ");
                     for(j=0;j<c;j++)
                         printf("%6.3f",d[i][j]);
                     printf("\n");
                     }
          break;
          case 3:for(i=0;i<r;i++)
                     {for(j=0;j<c;j++)
                           d[i][j]=0;
                           for(l=0;l<r;l++)
                               d[i][j]=d[i][j]+a[i][l]*b[l][j];
                     }
                 printf("\nRequired matrix is\n");
                 for(i=0;i<r;i++)
                     {for(j=0;j<c;j++)
                          printf("%4d",a[i][j]);
                     if(i!=1)
                        printf("     ");
                     else
                        printf("  *  ");
                     for(j=0;j<c;j++)
                         printf("%4d",b[i][j]);
                     if(i!=1)
                        printf("     ");
                     else
                        printf("  =  ");
                     for(j=0;j<c;j++)
                         printf("%6.3f",d[i][j]);
                     printf("\n");
                     }
          break;
          case 4:for(i=0;i<r;i++)
                     {for(j=0;j<c;j++)
                          d[i][j]=(float)a[i][j]/b[i][j];
                     }
                 printf("\nRequired matrix is\n");
                 for(i=0;i<r;i++)
                     {for(j=0;j<c;j++)
                          printf("%4d",a[i][j]);
                     if(i!=1)
                        printf("     ");
                     else
                        printf("  /  ");
                     for(j=0;j<c;j++)
                         printf("%4d",b[i][j]);
                     if(i!=1)
                        printf("     ");
                     else
                        printf("  =  ");
                     for(j=0;j<c;j++)
                         printf("%6.3f",d[i][j]);
                     printf("\n");
                     }
          break;
          default:printf("\nYou have not entered valid choice.Please enter 1 ,2 ,3 or 4 only\n");
                  k=0;
         }
        }
    printf("\nWant to do one more time Press 1\n");
    scanf("%d",&e);
   }
}

