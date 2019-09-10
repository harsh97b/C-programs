
//program to perform all the operations that a bank follows
#include<stdio.h>
#include<stdlib.h>//this header file includes exit function
typedef struct
    {
        int dd,mm,yy;
    }date;//structure for date
typedef struct
    {
        date dob;
        long int cust_id;
        char name[20];
        char account_type[20];
        long int balance;
        unsigned long long mobile_no;
        char password[10];
    }bank;
bank account[100];//100variables declared of data type bank
int i=0,j=0;
void account_info()//function to create an account
   {
       int k=0;
       char ch;
       printf("\t\t\t\tWelcome to India's most trusted bank:STUDENT BANK");
       printf("\n\t\t\t\tEnter the customer id you want=");
       scanf("%ld",&account[i].cust_id);
       printf("\n\t\t\t\tPlease enter your name=");
       fflush(stdin);
       gets(account[i].name);
       printf("\n\t\t\t\tWhich type of account you want to open:\n\t\t\t\tChoose from following options:");
       printf("\n\t\t\t\t1.Personal\n\t\t\t\t2.Current\n\t\t\t\t3.Saving");
       printf("\n\t\t\t\tSelected option=");
       fflush(stdin);
       gets(account[i].account_type);
       /*while(account[i].account_type!="personal"&&account[i].account_type!="current"&&account[i].account_type!="saving")
                     {
                         printf("\n\t\t\t\tChoose from following options:");
                         printf("\n\t\t\t\t1.Personal\n\t\t\t\t2.Current\n\t\t\t\t3.Saving");
                         printf("\n\t\t\t\tSelected option=");
                         gets(account[i].account_type);
                     }*/
       printf("\n\t\t\t\tPlease enter a 5 digit pin that you want=");
       fflush(stdin);
       while(k<5)
       {
          ch=getch();
          account[i].password[k]=ch;
          ch='*';
          printf("%c",ch);
          k++;
       }
       printf("\n\t\t\t\tBy how much amount you want to start your account=");
       scanf("%ld",&account[i].balance);
       printf("\n\t\t\t\tPlease enter your mobile number=");
       scanf("%10llu",&account[i].mobile_no);
       printf("\n\t\t\t\t***********************************************************");
       printf("\n\t\t\t\t      FILLED INFORMATION:");
       printf("\n\t\t\t\tToday's Date:-------------");
       printf("\n\t\t\t\tName=%s\n\t\t\t\tCustomer id=%ld\n\t\t\t\tAccount type=%s",account[i].name,account[i].cust_id,account[i].account_type);
       printf("\n\t\t\t\tBalance=%ld\n\t\t\t\tMobile no.=%llu",account[i].balance,account[i].mobile_no);
       i++;
       j++;
       printf("\n\t\t\t\tYour serial nmbr=%d",i);
   }
void update()//function to deposit or withdraw money
   {
       int i,choice,c_balance,k=0;
       char ch;
       printf("\n\t\t\t\tPlease enter your serial nmbr=");
       scanf("%d",&i);
       i=i-1;
       if(j<=i)
       printf("\n\t\t\t\tACCOUNT NOT FOUND");
       else
       {
        printf("\n\t\t\t\tPlease enter your 5 digit pin code=");
       while(k<5)
       {
          ch=getch();
          if(account[i].password[k]==ch)
             {
             ch='*';
             printf("%c",ch);
             k++;
             }
          else
          {
              printf("\n\t\t\t\tEntered pin is incorrect");
              main();
          }
       }
       printf("\n\t\t\t\tChoose from the following options:");
       printf("\n\t\t\t\t1.Deposit\n\t\t\t\t2.Withdraw");
       printf("\n\t\t\t\tSelected option=");
       scanf("%d",&choice);
       switch(choice)
       {
           case 1:
               printf("\n\t\t\t\tEnter the amount you want to deposit=");
               scanf("%d",&c_balance);
               account[i].balance=account[i].balance+c_balance;
               break;
           case 2:
               printf("\n\t\t\t\tEnter the amount you want to withdraw=");
               scanf("%d",&c_balance);
                if(account[i].balance<c_balance)
                       printf("\n\t\t\t\t\tInsufficient amount");
                else
                account[i].balance=account[i].balance-c_balance;
                break;
           default:
            printf("\n\t\t\t\tPlease enter a valid choice...");
       }
       }
   }
void give_info()//function to give account holders their information
   {
       int i,k=0;
       char ch;
       printf("\n\t\t\t\tPlease enter your serial nmbr=");
       scanf("%d",&i);
       i=i-1;
        if(j<=i)
       printf("\n\t\t\t\tACCOUNT NOT FOUND");
       else
       {
       printf("\n\t\t\t\tPlease enter your 5 digit pin code=");
       while(k<5)
       {
          ch=getch();
          if(account[i].password[k]==ch)
             {
             ch='*';
             printf("%c",ch);
             k++;
             }
          else
          {
              printf("\n\t\t\t\tEntered pin is incorrect");
              main();
          }
       }
       printf("\n\t\t\t\t***********************************************************");
       printf("\n\t\t\t\t      FILLED INFORMATION:");
       printf("\n\t\t\t\tName=%s\n\t\t\t\tCustomer id=%ld\n\t\t\t\tAccount type=%s",account[i].name,account[i].cust_id,account[i].account_type);
       printf("\n\t\t\t\tBalance=%ld\n\t\t\t\tMobile no.=%llu",account[i].balance,account[i].mobile_no);
   }
   }
void main()
  {
      int ch,i=0;
      while(i<100)
    {
      i++;
      printf("\n\n\t\t\t**************************************************************************");
      printf("\n\t\t\t\tWelcome to India's most trusted bank:STUDENT BANK");
      printf("\n\t\t\t\tChoose from following options:");
      printf("\n\t\t\t\t1.Create an account\n\t\t\t\t2.Account information\n\t\t\t\t3.deposit or withdraw\n\t\t\t\t4.Exit");
      printf("\n\t\t\t\tSelected option=");
      scanf("%d",&ch);
      switch(ch)
    {
       case 1:
        account_info();//function call for creating an account
        break;
       case 2:
           give_info();//function to give account holders their information
           break;
       case 3:
           update();//function call for deposit and withdrawing money
           break;
        case 4:
             printf("\n\t\t\t******Thanks for using the online application of student bank******");
             exit(0);//function to exit the application
        default:
            printf("\n\t\t\t\tPlease enter a valid choice");
    }
    }

  }


