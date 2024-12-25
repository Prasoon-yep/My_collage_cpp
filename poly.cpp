#include<iostream>
using namespace std;

class Base
{
    public:
    int num=3;
    
   virtual void display()
    {
        cout<<"the number of base class num is:"<<num<<endl;
    }
};
class derive:public Base
{
    public:
    int numd=3;
    
    void display()
    {
        cout<<"the number of derive numd is:"<<numd<<endl;
    }
};
int main()
{
    Base * pointer_of_base;
    Base obj1;
    derive obj2;
    pointer_of_base = &obj2;
    pointer_of_base->display();
    return 0;
}