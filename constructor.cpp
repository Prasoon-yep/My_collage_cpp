#include<iostream>
using namespace std;

class hello
{
    int code;
    string name;
    int sum;
    public :

    hello()
    {
       cout<<"Enter the code and name :"<<endl;
       cin>>code;
       cin>>name; 
    }
    hello(int a,int b)
    {
        cout<<"pls enter two number for sum :";
        int sum = a+b;
    }
    void display()
    {
        cout<<code<<endl;
        cout<<name<<endl;
        cout<<sum;
    }
};
int main()
{
    hello staff;
    hello(4,5);
    staff.display();
    return 0;
    
}