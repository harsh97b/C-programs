#include<stdio.h>
int main()
{//POINTS FALLING ON SAME LINE
    int s1,s2,x1,x2,x3,y1,y2,y3;
    printf("POINTS FALLING ON SAME LINE\nEnter points coordinate\nx1=");
    scanf("%d",&x1);
    printf("y1=");
    scanf("%d",&y1);
    printf("x2=");
    scanf("%d",&x2);
    printf("y2=");
    scanf("%d",&y2);
    printf("x3=");
    scanf("%d",&x3);
    printf("y3=");
    scanf("%d",&y3);
    s1=(y2-y1)/(x2-x1);
    s2=(y3-y2)/(x3-x2);
    if(s1==s2)
        printf("Lie on same line");
    else
        printf("Does not lie on same line");
}
