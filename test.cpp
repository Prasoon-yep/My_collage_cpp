#include<iostream>
using namespace std;

class student{
    string name;
    public :
    student()
    {
        cout<<"enter student name"<<endl;
    }
    void get_data()
    {
        cin>>name;
        cout<<"the name of student is: "<<endl;
        cout<<name<<endl;

    }
};
int main()
{
    student a;
    a.get_data();
    student b;
    b.get_data();
    return 0;
}