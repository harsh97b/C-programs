#include<stdio.h>
int main()
{
int C,D;
printf("Enter two numbers\n");
printf("C=");
scanf("%d",&C);
printf("D=");
scanf("%d",&D);
C=C+D;
D=C-D;
C=C-D;
printf("Numbers Swapped\nC=%d\nD=%d",C,D);
return 0;
}
