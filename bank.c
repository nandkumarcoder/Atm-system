#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h>
void deposit(); 
void withdrawal();
void transfer();
void checkbalance();
void last();
int list();
int TotalAmount=1000,Amount,Amo,tr,TotalDeposit=0; int TotalWith=0,TotalTr=0;
char a[20]; int Ac;
int main()
{
printf("\n Enter name: "); scanf("%s",a);
printf("\n Enter Ac no: "); scanf("%d",&Ac); while(1)
{

switch(list())
{
case 1: deposit();
TotalDeposit+=Amount;
 
break;
case 2:
withdrawal(); if(Amo<=TotalAmount) TotalWith+=Amo; break;
case 3:
transfer(); if(tr<=TotalAmount); TotalTr+=tr;
break; case 4:
checkbalance(); break;

case 5:last();
exit(0);

default:
printf("\n Inv;Id choice");} getch();	// end switch
}// end loop
}
int list()
{ 
printf("\n***************** WALCOME TO BANKING SYSTEM******************\n");
 int ch;
printf("\n1 Deposit amount: ");
 printf("\n2 Withdrawal amount: ");
  printf("\n3 Transfer amount : ");
   printf("\n4 Check balance : ");
    printf("\n5 Exit : ");
printf("\n Enter your choose: "); 
scanf("%d",&ch);
return(ch);
}

 void deposit()
 
{printf("\n********************************************"); 
printf("\n Enter the amount you want to deposit: ");
 scanf("%d",&Amount);
      TotalAmount+=Amount;
    printf("***** Susscesful *****");
   } 
 void withdrawal()
{printf("\n*******************************************"); 
printf("\n Enter the amount a want to withdrow: "); 
scanf("%d",&Amo);
if(Amo<=TotalAmount)
{
TotalAmount-=Amo;}
 else
printf("\n Less amount to withdrawal not possible : "); 
printf("***** Susscesful *****");
 

}// end withdrawal
 void transfer()
{printf("\n********************************************");
 printf("\n Enter the amount a want to transfer: ");
  scanf("%d",&tr);
if(tr<=TotalAmount) TotalAmount-=tr; else
printf("\n Less amount Transfer is not possible"); 
printf("***** Susscesful *****");

}//end transfer
void checkbalance()
{printf("\n********************************************"); 
printf("\n ToataAmount: %d",TotalAmount);
printf("\n Total Deposit Amount: %d",TotalDeposit); 
printf("\n Total Withdrow Amount: %d",TotalWith); 
printf("\n Total Transfer Amount: %d",TotalTr);
}
// end check void last()

void last()
{
printf("\n***************************************");
 printf("\n Name: %s ",a);
printf("\n Account no: %d ",Ac);
printf("\n ToataAmount %d",TotalAmount); 
printf("\n Total Diposide Amount %d",TotalDeposit); 
printf("\n Total Withdrawal Amount %d",TotalWith); 
printf("\n Total Tranfer Amount %d",TotalTr);
printf("\n **************THANKYOU***************"); 
}
