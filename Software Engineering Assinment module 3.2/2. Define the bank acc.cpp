#include<iostream>
using namespace std;

class bankDetail
{
    string accHolderName,accType;
    int accNumber;
    double accBalance;
    public:
    void value(string name,string type,int number,double balance)
	{
        accHolderName = name;
        accType = type;
        accNumber = number;
        accBalance = balance;
    }
    void deposite(double amount)
	{
        accBalance+=amount;
    }
    
    void withraw(double amount)
	{
        cout<<"withraw amout => "<<amount<<endl;
        if(amount<=accBalance){
            accBalance-=amount;
            cout<<"-----withraw done-----"<<endl;
        }
        else{
            cout<<"invalid amount"<<endl;
        }
    }
    
    void printinformation()
	{
        cout<<"Account holder name => "<<accHolderName<<endl;
        cout<<"Account type => "<<accType<<endl;
        cout<<"Account number => "<<accNumber<<endl;
        cout<<"Current balance => "<<accBalance<<endl;
    }


    
};

int main()
{
    bankDetail Bank;
    Bank.value("sneh","current",987654321,1000000);
    Bank.deposite(40000);
    Bank.withraw(130000);
    Bank.printinformation();
    return 0;
}
