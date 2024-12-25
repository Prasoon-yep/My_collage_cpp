#include<iostream>
using namespace std;
class derive;

class Base
{
    int id;
    string name;
    public:
    friend void shayad(Base a,derive b);
    void getdata()
    {
        cout<<"Enter id and name :"<<endl;
        cin>>id;
        cin>>name;
    }
    void display()
    {
        cout<<"The id is:"<<id<<endl;
        cout<<"The name is:"<<name<<endl;
    }
};
class derive
{
    string father_name;
    string mother_name;
    public:
    friend void shayad(Base a,derive b);
    void getdata()
    {
        
        cout<<"Enter your father and mother name"<<endl;
        cin>>father_name;
        cin>>mother_name;
    }
    void display()
    {
        cout<<"The father name and mother name is:"<<endl;
        cout<<father_name<<endl<<mother_name;
    }
    

};
void shayad(Base a, derive b)
{
    cout<<"the id is:"<<endl;
    cin>>a.id;
    cout<<"The name is:"<<endl;
    cin>>a.name;
    cout<<"Enter father and mother name again";
    cin>>b.father_name;
    cin>>b.mother_name;
    cout<<a.id<<a.name<<b.father_name<<b.mother_name;
};
int main()
{
    Base a;
    derive b;
    a.getdata();
    b.getdata();
    shayad(a,b);
    a.display();
    b.display();
}