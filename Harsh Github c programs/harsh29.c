#include<stdio.h>
#include<math.h>
int isTriangular(int n);
//CHECKING GIVEN NUMBER IS TRIANGULAR OR NOT
void main()
{
    int n;
    printf("CHECKING GIVEN NUMBER IS TRIANGULAR OR NOT\nEnter a number=");
    scanf("%d",&n);
    if(isTriangular(n)==1)
        printf("Entered number is a Triangular Number.");
    else
        if(isTriangular(n)==0)
        printf("Entered number is not a Triangular Number.");
    else
        printf("Enter a valid Number.");
}
int isTriangular(int n)
{
    float sr;
   sr=sqrt(8*n+1);
}
