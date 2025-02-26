#include<iostream>
using namespace std;
class Bank
{
    private:
    int account_no;
    char name[20];
    float balance;
    public:
    account()
    {
        account_no=0;
        name[0]='\0';
        balance=0;
    }
    account(int acc_no, char n[], float bal)
    {
        account_no=acc_no;
        strcpy(name,n);
        balance=bal;
    }
    void openAccount()
    {
        cout<<"Enter Account Number : ";
        cin>>account_no;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Balance : ";
        cin>>balance;
    }
    void deposit()
    {
        float amount;
        cout<<"Enter Amount to Deposit : ";
        cin>>amount;
        balance+=amount;
    }
    void withdraw()
    {
        float amount;
        cout<<"Enter Amount to Withdraw : ";
        cin>>amount;
        if(balance>=amount)
        {
            balance-=amount;
        }
        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }
    void display()
    {
        cout<<"Account Number : "<<account_no<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
};
void main()
{
    Bank BankAccount;
    BankAccount.account();
    BankAccount.openAccount();
    BankAccount.deposit();
    BankAccount.withdraw();
    BankAccount.display();

}