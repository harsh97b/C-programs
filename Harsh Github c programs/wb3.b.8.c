#include<stdio.h>
int main()
{//GIVEN YEAR IF LEAP OR NOT
    int y;
    printf("GIVEN YEAR IF LEAP OR NOT\nEnter the year=");
    scanf("%d",&y);
    if(y%400==0)
        printf("Leap year");
    else
        if(y%100==0)
        printf("Not Leap year");
    else
        if(y%4==0)
        printf("Leap year");
    else
        printf("Not Leap year");
}
