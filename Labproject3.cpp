#include<iostream>
using namespace std;

class Teacher
{
    int tid;
    string subject;
    public:
    void getdata()
    {
        cout<<"Enter your teacher id and your subject"<<endl;
        cin>>tid;
        cin>>subject;
    }
    void display()
    {
        cout<<"Your teacher id is:"<<tid<<endl;
        cout<<"Your subject of teaching is:"<<subject<<endl;
    }
};
class staff
{
    int sid;
    string position;
    public:
    void getdata()
    {
         cout<<"Enter your staff id and position"<<endl;
        cin>>sid;
        cin>>position;
    }
    void display()
    {
        cout<<"Your staff id is:"<<sid<<endl;
        cout<<"Your position is:"<<position<<endl;
    }
};
class Coordinator:public Teacher,public staff
{
    string department;
    public:
    void getdata()
    {
        Teacher::getdata();
        staff::getdata();
        cout<<"Enter your department"<<endl;
        cin>>department;
    }
    void display()
    {
        Teacher::display();
        staff::display();
        cout<<"Your department is:"<<department<<endl;
    }
};
int main()
{
    Coordinator sandip,shayad;
    sandip.getdata();
    shayad.getdata();
    sandip.display();
    shayad.display();
    return 0;
}