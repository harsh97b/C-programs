#include<stdio.h>
int main()
{
    int h,m,s,h1,m1,s1,h2,m2,s2;
    printf("Enter 1st Duration\n");
    printf("Enter Hours = ");
    scanf("%d",&h1);
    printf("Enter Minutes = ");
    scanf("%d",&m1);
    printf("Enter Seconds = ");
    scanf("%d",&s1);
    printf("Enter 2nd Duration\n");
    printf("Enter Hours = ");
    scanf("%d",&h2);
    printf("Enter Minutes = ");
    scanf("%d",&m2);
    printf("Enter Seconds = ");
    scanf("%d",&s2);
    h=h1+h2;
    m=(m1+m2)%60;
    h=h+(m1+m2)/60;
    s=(s1+s2)%60;
    m=m+(s1+s2)/60;
    printf("Net Duration = %d : %d : %d",h,m,s);
    return 0;
}
