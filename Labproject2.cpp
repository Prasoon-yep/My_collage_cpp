#include<iostream>
using namespace std;

class Account
{
    int Account_num;
    double balance;
    static double min_balance;
    public:
    void getdata()
    {
        cout<<"Enter your account number"<<endl;
        cin>>Account_num;
        cout<<"Enter the amount you want to deposit"<<endl;
        cin>>balance;
    }
    static void min_bal()
    {
        cout<<"The minimum balance is:"<<min_balance<<endl;
    }
    void display()
    {
        cout<<"Your Account number is :"<<Account_num<<endl;
        cout<<"Your balance is:"<<balance<<endl;
    }
};
double Account::min_balance=500.00;
int main()
{
    Account a[5];
    cout<<"Enter the details in Account"<<endl;
    for(int i=0;i<5;i++)
    {
        a[i].getdata();
    }
    cout<<"Displaying the details of Account"<<endl;
    for(int i=0;i<5;i++)
    {
        a[i].display();
    }
    Account::min_bal();
    return 0;
}