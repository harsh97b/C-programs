#include<stdio.h>
#include<conio.h>
#define M 100
#define F fflush(stdin);
typedef struct
{
    char name[30];
    unsigned long long rollnum;
    int marks[5];
    int agg;
}stud;
stud data[M];
int i;
void storeinfo(int i)
{
    int k=1;
    while(k==1)
    {
        if(i<M)
        {
        printf("\nStudent record\nName : ");
        F
        gets(data[i].name);
        printf("Roll no : ");
        scanf("%7llu",&data[i].rollnum);
        F
        printf("\n\nMarks\nENGLISH : ");
        scanf("%2d",&data[i].marks[0]);
        F
        printf("PHYSICS : ");
        scanf("%2d",&data[i].marks[1]);
        F
        printf("CHEMISTRY : ");
        scanf("%2d",&data[i].marks[2]);
        F
        printf("MATHS : ");
        scanf("%2d",&data[i].marks[3]);
        F
        printf("CS : ");
        scanf("%2d",&data[i].marks[4]);
        data[i].agg=data[i].marks[0]+data[i].marks[1]+data[i].marks[2]+data[i].marks[3]+data[i].marks[4];
        i++;
        printf("\n\nWant to add one more record : 1.Yes  2.No\n");
        F
        scanf("%d",&k);
        }
    }
}
void HighAgg()
{
    int j,high=0;
    for(j=0;j<M;j++)
    {
        if(high<data[j].agg)
            high=data[j].agg;
    }
    for(j=0;j<M;j++)
    {
        if(high==data[j].agg)
            {

                printf("\n\n%s secured highest aggregate among all students.",data[j].name);
            }
    }
}
void main()
{
    i=0;
    printf("*****STUDENT RECORD********");
    storeinfo(i);
    HighAgg();
}
