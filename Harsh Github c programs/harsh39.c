#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define F fflush(stdin);
#define FOR95 for(i=0;i<95;i++)
#define ENT printf("\n");
#define STAR FOR95\
            printf("*");
#define UOD LOD_\
        ENT\
        LOD_\
        ENT
#define LOD_ FOR95\
        printf("_");
#define LOD2 FOR95\
        printf("-");
#define PLUS printf("+");
#define LD PLUS\
        for(i=0;i<10;i++)\
        printf("-");\
        PLUS\
        for(i=0;i<31;i++) \
        printf("-");\
        PLUS\
        for(i=0;i<18;i++)\
        printf("-");\
        PLUS\
        for(i=0;i<15;i++)\
        printf("-");\
        PLUS\
        for(i=0;i<15;i++)\
        printf("-");\
        PLUS\
        ENT
#define MAX for(l=0;l<100;l++)\
    {\
        if(acc[l].custId==0)\
            break;\
    }
//BANK STUCTURE
void create(int j);
void update();
void close();
void login();
void accountInfo();
void showAll();
int MYstrlen(char *s);//this function is used in showAll function to calculate length of a String
typedef struct
{
    int custId;//CUST_ID -> unique id of each account holder
    char name[30];//name of account holder
    int accType;//account type personal,current or saving
    double balance;//balance in the account of account holder
    unsigned long long mobnum;//Mobile Number of the account holder
    int pin;//PIN of the account
}bank;

int j;//index of acc[100] array
int choicepin,i,k,l,m,pin,val;//common variable used in many functions so i made them global
double bal;
char *t,*q,nam[30];//common variable used in many functions so i made them global
bank acc[100];//acc is array to store data of various accounts

void main()
{
    int choice=0;
    j=-1;
        {//for upper output design
            STAR
            printf("\n                                  *** DECRYPTOGRAPHY BANK ***\n");//"34 SPACES"+"***"+"1 SPACE"
            STAR
            printf("\n\n");
        }
        printf("Made By Harsh Bidhuri\nSystem Id : 2016010891\nCourse : Btech CSE\nClass : CSE-B\n");
        printf("\nDate  : %s\n",__DATE__);
        printf("Time  : %s\n",__TIME__);
    while(choice!=4)
    {
        UOD
        //__STDC__//#define a//#ifdef __STDC__//printf("time is defined\n");//#endif//#ifdef a//printf("a is defined\n");//#endif
        //printf("FILE : %s\n",__FILE__);
        //printf("Line : %s\n",__LINE__);
        //printf("STDC : %d\n",__STDC__);
        printf("\nWhat did you want to do now\n1. Open an account      2 . Account Login       3. All Saved Accounts            4. Exit\nEnter your choice: ");
        scanf("%d",&choice);F
        while(choice<1||choice>4)
        {
            printf("Please choose from the above responses 1, 2, 3 or 4\n\nEnter you choice : ");
            scanf("%d",&choice);F
        }
        switch(choice)
        {
            case 1 :j++;
                    create(j);
                break;
            case 2 :login();
                break;
            case 3 :showAll();
                break;
            case 4 :exit(0);
        }
        LOD2
        printf("\n\n\n\n\n\n");
    }
}
void create(int j)
{
    int i;
    {// body
        printf("\n\nOPEN AN ACCOUNT\n");LOD2
        ENT
        acc[j].custId=j+1;
        printf("Account Types ->     1. Savings Account           2. Current Account\nAccount Type   : ");
        scanf("%d",&acc[j].accType);F
        while(!(acc[j].accType==1||acc[j].accType==2))
        {
                printf("Press 1 or 2\nAccount Type   : ");
                scanf("%d",&acc[j].accType);F
        }
        printf("Name          : ");
        gets(acc[j].name);
        acc[j].balance=0;
        printf("Mobile Number : ");
        scanf("%10llu",&acc[j].mobnum);F
        printf("4 digit PIN   : ");
        scanf("%4d",&acc[j].pin);F
        LOD2
        ENT
    }
    {// body print
        printf("\n\nGENERATED ACCOUNT INFORMATION\n");LOD2
        ENT
        printf("Cust_ID       : %d\n",acc[j].custId);
        printf("Name          : ");
        puts(acc[j].name);
        if(acc[j].accType==1)
        printf("Account Type  : Savings Account\n");
        else
        if(acc[j].accType==2)
        printf("Account Type  : Current Account\n");
        else
            printf("Account Type  : No Account Type choosen\n");
        printf("Balance       : %lf\n",acc[j].balance);
        printf("Mobile Number : %llu\n",acc[j].mobnum);
        printf("PIN           : %d\n",acc[j].pin);LOD2
        ENT
    }
}
void login()
{
    int choose=0,log,p;
    printf("\n\nLOGIN\n");LOD2
    ENT
    printf("\t\t\t\tCust Id : ");
    scanf("%d",&log);F
    printf("\t\t\t\tPin     : ");
    scanf("%d",&pin);F
    MAX
    if(log>l)
        printf("\n1.Incorrect Cust ID  or  Pin\n");

    else
    {
        for(p=0;p<l;p++)
        {
            if(acc[p].custId==log)
                break;
        }
        if(p==l)
            printf("\n2.Incorrect Cust ID  or  Pin\n");
        else
        {
            if(pin==acc[p].pin)
            {
                while(choose!=5)
                {
                    printf("\nWhat did you want to do now\n1. Account Information   2. Balance Enquiry        3. Deposit/Withdraw       4. Close an account\n5. Log out\nEnter your choice: ");
                    scanf("%d",&choose);F
                    while(choose<1||choose>5)
                    {
                        printf("Please choose from the above responses 1, 2, 3, 4 or 5\n\nEnter you choice : ");
                        scanf("%d",&choose);F
                    }
                    switch(choose)
                    {
                        case 1 :
                                printf("\n\nACCOUNT INFORMATION\n");LOD2
                                ENT
                                printf("Cust_ID       : %d\n",acc[p].custId);
                                printf("Name          : ");
                                puts(acc[p].name);
                                if(acc[p].accType==1)
                                    printf("Account Type  : Savings Account\n");
                                else
                                if(acc[p].accType==2)
                                    printf("Account Type  : Current Account\n");
                                else
                                    printf("Account Type  : No Account Type choosen\n");
                                printf("Balance       : %lf\n",acc[p].balance);
                                printf("Mobile Number : %llu\n",acc[p].mobnum);LOD2
                            break;
                        case 2 :
                                printf("\n\nACCOUNT BALANCE\n");LOD2
                                ENT
                                printf("Account Balance   : %lf\n",acc[p].balance);LOD2
                            break;
                        case 3 :printf("\n\nDEPOSIT/WITHDRAW\n");LOD2
                                ENT
                                printf("\n\nWhat did you want to do :\n1. Deposit                 2. Withdraw\nEnter your choice : ");
                                scanf("%d",&choicepin);F
                                while(choicepin<1||choicepin>2)
                                {
                                printf("Please choose from the above responses 1 or 2\n\nEnter you choice : ");
                                scanf("%d",&choicepin);F
                                }
                                switch(choicepin)
                                {
                                    case 1 :printf("\nEnter amount to be Deposited : ");
                                            scanf("%lf",&bal);F
                                            printf("\nbal=%lf\n",bal);
                                            acc[p].balance+=bal;
                                        break;
                                    case 2 :printf("\nEnter amount to be Withdrawn : ");
                                            scanf("%lf",&bal);F
                                            if(bal>acc[p].balance)
                                                printf("Does not have this much balance cannot withdraw.\n");
                                            else
                                            acc[p].balance-=bal;
                                }LOD2
                            break;
                        case 4 :printf("\n\nCLOSE ACCOUNT\n");LOD2
                                ENT
                                acc[p].accType=0;
                                acc[p].balance=0;
                                acc[p].mobnum=0;
                                acc[p].pin=0;
                                t=acc[p].name;
                                *t='\0';
                                printf("\nAccount has been closed Successfully.\n");LOD2
                            break;
                        case 5 :printf("\n\n\t\t\t\tLOG OUT SUCESSFULY");
                    }
                    printf("\n\n\n");
                }
            }
            else
                printf("\n3.Incorrect Cust ID  or  Pin\n");
        }
    }
}
void showAll()
{
    int i,k,l,strlength;
    printf("\n\nALL ACCOUNT DATA\n");
        LD
    printf("| CUST_ID  | NAME                          | ACCOUNT TYPE     | BALANCE       | MOBILE NUMBER |\n");
        LD
    for(l=0;l<100;l++)
    {//checking how many records are there till now
        if(acc[l].custId==0)
            break;
    }
    for(k=0;k<l;k++)
    {//records
        printf("| %8d | ",acc[k].custId);
        printf("%s",acc[k].name);
        strlength=MYstrlen(acc[k].name);
        for(i=0;i<(30-strlength);i++)     //space will print
        printf(" ");
        if(acc[k].accType==1)
        printf("| Savings Account  | ");
        else
        if(acc[k].accType==2)
        printf("| Current Account  | ");
        else
            printf("| Not choosen      | ");
        printf("%13.4lf | %13llu |\n",acc[k].balance,acc[k].mobnum);
    }
        LD
}
int MYstrlen(char *s)
{
    int c=0;
    while(*s!='\0')
    {
        c++;
        s++;
    }
    return c;
}

