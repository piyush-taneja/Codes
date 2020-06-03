#include<iostream>
using namespace std;
class bank{
char depositior[10];
int account_no;
char account[10];
int balance;
public:
    void enter_data()
    {
cout<<"Enter Depositior name-->";
cin>>depositior;
cout<<"\nAccount no.-->";
cin>>account_no;
cout<<"\nType of account-->";
cin>>account;
cout<<"\nBalance-->";
cin>>balance;
    }
    void deposit_amount()
    {
        int x;
cout<<"Enter the amount to be depositied";
cin>>x;
balance=balance+x;
    }
    void withdraw_amount()
    {int x;
    cout<<"\nYour current balance is -->"<<balance;
    cout<<"\nEnter the amount that is to be withdrawl-->";
    cin>>x;
    balance=balance-x;
    cout<<"Withdrawing-------";
    cout<<"\nYour current balance is-->"<<balance;
    }
    void display()
    {
        cout<<"\nName-->"<<depositior<<endl<<"Balance-->"<<balance;
    }
};


int main()
{
    int i,c;
bank b;
  cout<<"1.Enter the details \n2.Enter to deposite  \n3.Enter to withdrawl \n4.Enter to display \n5.Enter to exit";
  while(1)
  {
  cin>>c;
  switch(c)
  {

  case 1:
    b.enter_data();
    break;
  case 2:
    b.deposit_amount();
    break;
  case 3:
    b.withdraw_amount();
    break;
  case 4:
    b.display();
    break;
  case 5:
    break;
  default:
    cout<<"Wrong choice";
    break;
      }
  }
  return 0;
}
