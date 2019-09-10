#include<stdio.h>
//BANK STUCTURE
void create(int j);
void update();
void close();
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
int choice,choicepin,i,k,l,m,pin,val;//common variable used in many functions so i made them global
char *p,*q,nam[30];//common variable used in many functions so i made them global
bank acc[100];//acc is array to store data of various accounts

void main()
{
    int e;
    choice=0;
    j=-1;
        {//for upper output design
            for(i=0;i<95;i++)     //95 stars will print
            printf("*");
            printf("\n                                  *** DECRYPTOGRAPHY BANK ***\n");//"34 SPACES"+"***"+"1 SPACE"
            for(i=0;i<95;i++)     //95 stars will print
            printf("*");
            printf("\n\n");
        }
        printf("Made By Harsh Bidhuri\nSystem Id : 2016010891\nCourse : Btech CSE\nClass : CSE-B\n");
    while(choice!=6)
    {
        {//for upper output design
        for(i=0;i<95;i++)     //95 stars will print
        printf("_");
        printf("\n");
        for(i=0;i<95;i++)     //95 stars will print
        printf("_");
        printf("\n");
        }
        printf("What did you want to do now\n1. Open an account       2. Close an account       3. Deposit/Withdraw       4. Balance Enquiry\n5. Account Information   6. All Saved Accounts     7. Exit\n\nEnter your choice: ");
        scanf("%d",&choice);
        while(choice<1||choice>7)
        {
            printf("Please choose from the above responses 1, 2, 3, 4, 5 or 6\n\nEnter you choice : ");
            scanf("%d",&choice);
        }
            switch(choice)
            {
                case 1 :j++;
                        create(j);
                    break;
                case 2 :close();
                    break;
                case 3 :update();
                    break;
                case 4 :accountInfo();
                    break;
                case 5 :accountInfo();
                    break;
                case 6 :showAll();
                    break;
                case 7 :e=1;
            }
        {//for lower output design
        for(i=0;i<95;i++)     //95 _ will print
        printf("_");
        printf("\n\n\n\n\n\n");
        }
        }
}
void create(int j)
{
    int i;
    {//case 1 body
        printf("\n\nOPEN AN ACCOUNT\n");
        for(i=0;i<95;i++)     //95 _ will print
        printf("-");
        printf("\n");
        acc[j].custId=j+1;
        printf("Account Types     -> 1. Savings Account           2. Current Account\nAccount Type  : ");
        scanf("%d",&acc[j].accType);
        printf("Name          : ");
        fflush(stdin);
        gets(acc[j].name);
        acc[j].balance=0;
        printf("Mobile Number : ");
        scanf("%10llu",&acc[j].mobnum);
        fflush(stdin);
        printf("4 digit PIN   : ");
        scanf("%4d",&acc[j].pin);
        fflush(stdin);
        for(i=0;i<95;i++)     //95 stars will print
        printf("-");
        printf("\n");
    }
    {//case 1 body print
        printf("\n\nGENERATED ACCOUNT INFORMATION\n");
        for(i=0;i<95;i++)     //95 stars will print
        printf("-");
        printf("\n");
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
        printf("PIN           : %d\n",acc[j].pin);
        for(i=0;i<95;i++)     //95 stars will print
        printf("-");
        printf("\n");
    }
}
void close()
{
    unsigned long long mobi;
    k=0;
    m=0;
    //char *p,nam[30];
    for(l=0;l<100;l++)
    {//checking how many records are there till now
        if(acc[l].custId==0)
            break;
    }
    printf("\n\nBy which Parameter do you want to access your account to close it.\n1. Cust_ID         2. Name           3. Mobile number\nEnter your choice : ");
    scanf("%d",&choice);
    while(choice<1||choice>3)
        {
            printf("Please choose from the above responses 1, 2 or 3\n\nEnter you choice : ");
            scanf("%d",&choice);
        }
    switch(choice)
    {
        case 1 :while(m==0)
                {
                    m=1;
                    printf("Enter Cust_ID : ");
                    scanf("%d",&val);
                    //printf("\nl=%d\n",l);
                    if(val<=0)
                    {
                        printf("\nPlease input positive interger value for CustID.\n");
                        m=0;
                    }
                    else
                    if(val<=l)
                    {
                        for(j=0;j<l;j++)
                        {
                            if(acc[j].custId==val)
                                break;
                        }
                        while(k==0)
                        {
                            k=1;
                            printf("Enter PIN : ");
                            scanf("%d",&pin);
                            if(pin==acc[j].pin)
                            {
                                acc[j].accType=0;
                                acc[j].balance=0;
                                acc[j].mobnum=0;
                                acc[j].pin=0;
                                p=acc[j].name;
                                *p='\0';
                                printf("\nAccount has been closed Successfully.\n");
                            }
                            else
                            {
                                printf("\nYour entered PIN is incorrect.\nSelect your choice -> 1. Leave        2. Retry\nYour choice : ");
                                scanf("%d",&choicepin);
                                while(choicepin<1||choicepin>2)
                                {
                                    printf("Please choose from the above responses 1 or 2\n\nYour choice : ");
                                    scanf("%d",&choicepin);
                                }
                                if(choicepin==1)
                                    k=1;
                                else
                                if(choicepin==2)
                                    k=0;
                            }
                        }
                    }
                    else
                    {
                        printf("\nAccount of this Cust_ID has not been created yet.\n");
                        m=1;
                    }
                }
            break;
        case 2 :
                {printf("Enter Name : ");
                fflush(stdin);
                gets(nam);
                for(j=0;j<l;j++)
                {
                    if(MYstrlen(acc[j].name)==MYstrlen(nam))
                    {
                        p=acc[j].name;
                        q=nam;
                        while(*p!='\0')
                        {if(*p!=*q)
                            break;
                            p++;
                            q++;
                        }
                        if(*p=='\0')
                        {
                            //printf("\nj=%d\n",j);
                            while(k==0)
                            {
                                k=1;
                                //printf("\npin=%d\n",acc[j].pin);
                                printf("Enter PIN : ");
                                scanf("%d",&pin);
                                if(pin==acc[j].pin)
                                {
                                    acc[j].accType=0;
                                    acc[j].balance=0;
                                    acc[j].mobnum=0;
                                    acc[j].pin=0;
                                    p=acc[j].name;
                                    *p='\0';
                                    printf("\nAccount has been closed Successfully.\n");
                                }
                                else
                                {
                                    printf("Your entered PIN is incorrect.\nSelect your choice -> 1. Leave        2. Retry\nYour choice : ");
                                    scanf("%d",&choicepin);
                                    while(choicepin<1||choicepin>2)
                                    {
                                        printf("Please choose from the above responses 1 or 2\n\nYour choice : ");
                                        scanf("%d",&choicepin);
                                    }
                                    if(choicepin==1)
                                        k=1;
                                    else
                                    if(choicepin==2)
                                        k=0;
                                }
                                //printf("\nk=%d\n",k);
                            }
                        }
                    }
                }
                if(j==l)
                    printf("No Match found\n");
                }
            break;
        case 3 :
                {
                    printf("Enter Mobile Number : ");
                    scanf("%10llu",&mobi);
                    fflush(stdin);
                    for(j=0;j<l;j++)
                    {
                        if(acc[j].mobnum==mobi)
                        {
                            //printf("\nj=%d\n",j);
                            while(k==0)
                            {
                                k=1;
                                printf("\npin=%d\n",acc[j].pin);
                                printf("Enter PIN : ");
                                scanf("%d",&pin);
                                if(pin==acc[j].pin)
                                {
                                    acc[j].accType=0;
                                    acc[j].balance=0;
                                    acc[j].mobnum=0;
                                    acc[j].pin=0;
                                    p=acc[j].name;
                                    *p='\0';
                                    printf("\nAccount has been closed Successfully.\n");
                                }
                                else
                                {
                                    printf("Your entered PIN is incorrect.\nSelect your choice -> 1. Leave        2. Retry\nYour choice : ");
                                    scanf("%d",&choicepin);
                                    while(choicepin<1||choicepin>2)
                                    {
                                        printf("Please choose from the above responses 1 or 2\n\nYour choice : ");
                                        scanf("%d",&choicepin);
                                    }
                                    if(choicepin==1)
                                        k=1;
                                    else
                                    if(choicepin==2)
                                        k=0;
                                }
                                //printf("\nk=%d\n",k);
                            }
                            break;
                        }
                    }
                    if(j==l)
                        printf("No Match found\n");
                }
    }
}
void update()
{
    unsigned long long mobi;
    k=0;
    m=0;
    double bal;
    printf("\n\nWhat did you want to do :\n1. Deposit                 2. Withdraw\nEnter your choice : ");
    scanf("%d",&choicepin);
    while(choicepin<1||choicepin>2)
        {
            printf("Please choose from the above responses 1, 2 or 3\n\nEnter you choice : ");
            scanf("%d",&choicepin);
        }
    printf("\n\nBy which Parameter do you want to access your account.\n1. Cust_ID         2. Name           3. Mobile number\nEnter your choice : ");
    scanf("%d",&choice);
    while(choice<1||choice>3)
        {
            printf("Please choose from the above responses 1, 2 or 3\n\nEnter you choice : ");
            scanf("%d",&choice);
        }
    switch(choice)
    {
        case 1 :while(m==0)
                {
                    m=1;
                    printf("Enter Cust_ID : ");
                    scanf("%d",&val);
                    //printf("\nl=%d\n",l);
                    if(val<=0)
                    {
                        printf("\nPlease input positive interger value for CustID.\n");
                        m=0;
                    }
                    else
                    if(val<=l)
                    {
                        for(j=0;j<l;j++)
                        {
                            if(acc[j].custId==val)
                                break;
                        }
                        while(k==0)
                        {
                            k=1;
                            printf("Enter PIN : ");
                            scanf("%d",&pin);
                            if(pin==acc[j].pin)
                            {
                                switch(choicepin)
                                {
                                    case 1 :printf("\nEnter amount to be Deposited : ");
                                            scanf("%lf",&bal);
                                            acc[j].balance+=bal;
                                        break;
                                    case 2 :printf("\nEnter amount to be Withdrawn : ");
                                            scanf("%lf",&bal);
                                            acc[j].balance-=bal;
                                }
                            }
                            else
                            {
                                printf("\nYour entered PIN is incorrect.\nSelect your choice -> 1. Leave        2. Retry\nYour choice : ");
                                scanf("%d",&choicepin);
                                while(choicepin<1||choicepin>2)
                                {
                                    printf("Please choose from the above responses 1 or 2\n\nYour choice : ");
                                    scanf("%d",&choicepin);
                                }
                                if(choicepin==1)
                                    k=1;
                                else
                                if(choicepin==2)
                                    k=0;
                            }
                        }
                    }
                    else
                    {
                        printf("\nIncorrect Cust_ID.\nSelect your choice -> 1. Leave        2. Retry\nYour choice : ");
                        scanf("%d",&choicepin);
                        while(choicepin<1||choicepin>2)
                        {
                            printf("Please choose from the above responses 1 or 2\n\nYour choice : ");
                            scanf("%d",&choicepin);
                        }
                        if(choicepin==1)
                            m=1;
                        else
                        if(choicepin==2)
                            m=0;
                    }
                }
            break;
        case 2 :
                {printf("Enter Name : ");
                fflush(stdin);
                gets(nam);
                for(j=0;j<l;j++)
                {
                    if(MYstrlen(acc[j].name)==MYstrlen(nam))
                    {
                        p=acc[j].name;
                        q=nam;
                        while(*p!='\0')
                        {if(*p!=*q)
                            break;
                            p++;
                            q++;
                        }
                        if(*p=='\0')
                        {
                            //printf("\nj=%d\n",j);
                            while(k==0)
                            {
                                k=1;
                                //printf("\npin=%d\n",acc[j].pin);
                                printf("Enter PIN : ");
                                scanf("%d",&pin);
                                if(pin==acc[j].pin)
                                {
                                    switch(choicepin)
                                    {
                                        case 1 :printf("\nEnter amount to be Deposited : ");
                                                scanf("%lf",&bal);
                                                acc[j].balance+=bal;
                                            break;
                                        case 2 :printf("\nEnter amount to be Withdrawn : ");
                                                scanf("%lf",&bal);
                                                acc[j].balance-=bal;
                                    }
                                }
                                else
                                {
                                    printf("Your entered PIN is incorrect.\nSelect your choice -> 1. Leave        2. Retry\nYour choice : ");
                                    scanf("%d",&choicepin);
                                    while(choicepin<1||choicepin>2)
                                    {
                                        printf("Please choose from the above responses 1 or 2\n\nYour choice : ");
                                        scanf("%d",&choicepin);
                                    }
                                    if(choicepin==1)
                                        k=1;
                                    else
                                    if(choicepin==2)
                                        k=0;
                                }
                                //printf("\nk=%d\n",k);
                            }
                        }
                    }
                }
                if(j==l)
                    printf("No Match found\n");
                }
            break;
        case 3 :
                {
                    printf("Enter Mobile Number : ");
                    scanf("%10llu",&mobi);
                    fflush(stdin);
                    for(j=0;j<l;j++)
                    {
                        if(acc[j].mobnum==mobi)
                        {
                            //printf("\nj=%d\n",j);
                            while(k==0)
                            {
                                k=1;
                                printf("\npin=%d\n",acc[j].pin);
                                printf("Enter PIN : ");
                                scanf("%d",&pin);
                                if(pin==acc[j].pin)
                                {
                                    switch(choicepin)
                                    {
                                        case 1 :printf("\nEnter amount to be Deposited : ");
                                                scanf("%lf",&bal);
                                                acc[j].balance+=bal;
                                            break;
                                        case 2 :printf("\nEnter amount to be Withdrawn : ");
                                                scanf("%lf",&bal);
                                                acc[j].balance-=bal;
                                    }
                                }
                                else
                                {
                                    printf("Your entered PIN is incorrect.\nSelect your choice -> 1. Leave        2. Retry\nYour choice : ");
                                    scanf("%d",&choicepin);
                                    while(choicepin<1||choicepin>2)
                                    {
                                        printf("Please choose from the above responses 1 or 2\n\nYour choice : ");
                                        scanf("%d",&choicepin);
                                    }
                                    if(choicepin==1)
                                        k=1;
                                    else
                                    if(choicepin==2)
                                        k=0;
                                }
                                //printf("\nk=%d\n",k);
                            }
                            break;
                        }
                    }
                    if(j==l)
                        printf("No Match found\n");
                }
    }
}
void accountInfo()
{
    //int i,j,k=0,l,m=0,choice,val,pin,choicepin;
    k=0;
    m=0;
    unsigned long long mobi;
    //char *p,*q,nam[30];
    for(l=0;l<100;l++)
    {//checking how many records are there till now
        if(acc[l].custId==0)
            break;
    }
    printf("\n\nBy which Parameter do you want to get your Account Info\n1. Cust_ID         2. Name           3. Mobile number\nEnter your choice : ");
    scanf("%d",&choice);
    while(choice<1||choice>3)
        {
            printf("Please choose from the above responses 1, 2 or 3\n\nEnter you choice : ");
            scanf("%d",&choice);
        }
    switch(choice)
    {
        case 1 :while(m==0)
                {
                    m=1;
                    printf("Enter Cust_ID : ");
                    scanf("%d",&val);
                    //printf("\nl=%d\n",l);
                    if(val<=0)
                    {
                        printf("\nPlease input positive interger value for CustID.\n");
                        m=0;
                    }
                    else
                    if(val<=l)
                    {
                        for(j=0;j<l;j++)
                        {
                            if(acc[j].custId==val)
                                break;
                        }
                        while(k==0)
                        {
                            k=1;
                            printf("Enter PIN : ");
                            scanf("%d",&pin);
                            if(pin==acc[j].pin)
                            {
                                printf("\n\nACCOUNT INFORMATION\n");
                                for(i=0;i<95;i++)     //95 stars will print
                                printf("-");
                                printf("\n");
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
                                //printf("PIN           : %d\n",acc[j].pin);
                                for(i=0;i<95;i++)     //95 stars will print
                                printf("-");
                                printf("\n");
                            }
                            else
                            {
                                printf("\nYour entered PIN is incorrect.\nSelect your choice -> 1. Leave        2. Retry\nYour choice : ");
                                scanf("%d",&choicepin);
                                while(choicepin<1||choicepin>2)
                                {
                                    printf("Please choose from the above responses 1 or 2\n\nYour choice : ");
                                    scanf("%d",&choicepin);
                                }
                                if(choicepin==1)
                                    k=1;
                                else
                                if(choicepin==2)
                                    k=0;
                            }
                        }
                    }
                    else
                    {
                        printf("\nIncorrect Cust_ID.\nSelect your choice -> 1. Leave        2. Retry\nYour choice : ");
                        scanf("%d",&choicepin);
                        while(choicepin<1||choicepin>2)
                        {
                            printf("Please choose from the above responses 1 or 2\n\nYour choice : ");
                            scanf("%d",&choicepin);
                        }
                        if(choicepin==1)
                            m=1;
                        else
                        if(choicepin==2)
                            m=0;
                    }
                }
            break;
        case 2 :
                {printf("Enter Name : ");
                fflush(stdin);
                gets(nam);
                for(j=0;j<l;j++)
                {
                    if(MYstrlen(acc[j].name)==MYstrlen(nam))
                    {
                        p=acc[j].name;
                        q=nam;
                        while(*p!='\0')
                        {if(*p!=*q)
                            break;
                            p++;
                            q++;
                        }
                        if(*p=='\0')
                        {
                            //printf("\nj=%d\n",j);
                            while(k==0)
                            {
                                k=1;
                                //printf("\npin=%d\n",acc[j].pin);
                                printf("Enter PIN : ");
                                scanf("%d",&pin);
                                if(pin==acc[j].pin)
                                {
                                    printf("\n\nACCOUNT INFORMATION\n");
                                    for(i=0;i<95;i++)     //95 stars will print
                                    printf("-");
                                    printf("\n");
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
                                    //printf("PIN           : %d\n",acc[j].pin);
                                    for(i=0;i<95;i++)     //95 stars will print
                                    printf("-");
                                    printf("\n");
                                }
                                else
                                {
                                    printf("Your entered PIN is incorrect.\nSelect your choice -> 1. Leave        2. Retry\nYour choice : ");
                                    scanf("%d",&choicepin);
                                    while(choicepin<1||choicepin>2)
                                    {
                                        printf("Please choose from the above responses 1 or 2\n\nYour choice : ");
                                        scanf("%d",&choicepin);
                                    }
                                    if(choicepin==1)
                                        k=1;
                                    else
                                    if(choicepin==2)
                                        k=0;
                                }
                                //printf("\nk=%d\n",k);
                            }
                        }
                    }
                }
                if(j==l)
                    printf("No Match found\n");
                }
            break;
        case 3 :
                {
                    printf("Enter Mobile Number : ");
                    scanf("%10llu",&mobi);
                    fflush(stdin);
                    for(j=0;j<l;j++)
                    {
                        if(acc[j].mobnum==mobi)
                        {
                            //printf("\nj=%d\n",j);
                            while(k==0)
                            {
                                k=1;
                                printf("\npin=%d\n",acc[j].pin);
                                printf("Enter PIN : ");
                                scanf("%d",&pin);
                                if(pin==acc[j].pin)
                                {
                                    printf("\n\nACCOUNT INFORMATION\n");
                                    for(i=0;i<95;i++)     //95 stars will print
                                    printf("-");
                                    printf("\n");
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
                                    //printf("PIN           : %d\n",acc[j].pin);
                                    for(i=0;i<95;i++)     //95 stars will print
                                    printf("-");
                                    printf("\n");
                                }
                                else
                                {
                                    printf("Your entered PIN is incorrect.\nSelect your choice -> 1. Leave        2. Retry\nYour choice : ");
                                    scanf("%d",&choicepin);
                                    while(choicepin<1||choicepin>2)
                                    {
                                        printf("Please choose from the above responses 1 or 2\n\nYour choice : ");
                                        scanf("%d",&choicepin);
                                    }
                                    if(choicepin==1)
                                        k=1;
                                    else
                                    if(choicepin==2)
                                        k=0;
                                }
                                //printf("\nk=%d\n",k);
                            }
                            break;
                        }
                    }
                    if(j==l)
                        printf("No Match found\n");
                }
    }

}
void showAll()
{
    int i,k,l,strlength;
    printf("\n\nALL ACCOUNT DATA\n");
        {//Line Design
            printf("+");
            for(i=0;i<10;i++)     //Cust_ID
                printf("-");
            printf("+");
            for(i=0;i<31;i++)     //Name
                printf("-");
            printf("+");
            for(i=0;i<18;i++)     //Account Type
                printf("-");
             printf("+");
            for(i=0;i<15;i++)     //Balance
                printf("-");
            printf("+");
            for(i=0;i<15;i++)     //Mobile Number
                printf("-");
            printf("+");
            printf("\n");
        }
    printf("| CUST_ID  | NAME                          | ACCOUNT TYPE     | BALANCE       | MOBILE NUMBER |\n");
        {//Line Design
            printf("+");
            for(i=0;i<10;i++)     //Cust_ID
                printf("-");
            printf("+");
            for(i=0;i<31;i++)     //Name
                printf("-");
            printf("+");
            for(i=0;i<18;i++)     //Account Type
                printf("-");
             printf("+");
            for(i=0;i<15;i++)     //Balance
                printf("-");
            printf("+");
            for(i=0;i<15;i++)     //Mobile Number
                printf("-");
            printf("+");
            printf("\n");
        }
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
        {//Line Design
            printf("+");
            for(i=0;i<10;i++)     //Cust_ID
                printf("-");
            printf("+");
            for(i=0;i<31;i++)     //Name
                printf("-");
            printf("+");
            for(i=0;i<18;i++)     //Account Type
                printf("-");
             printf("+");
            for(i=0;i<15;i++)     //Balance
                printf("-");
            printf("+");
            for(i=0;i<15;i++)     //Mobile Number
                printf("-");
            printf("+");
            printf("\n");
        }

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
