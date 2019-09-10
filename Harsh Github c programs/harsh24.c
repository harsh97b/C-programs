#include<stdio.h>
int admyear(int roll);
int main()
{
    int r,year;
    //Program to get year of admission from roll no of an individual student
    printf("Program to get year of admission from roll no of an individual student\nEnter your Roll No - ");
    scanf("%d",&r);
    year=admyear(r);
    printf("Admission Year=20%d",year);
}
int admyear(int roll)
{
    return((roll/10000000));
}
