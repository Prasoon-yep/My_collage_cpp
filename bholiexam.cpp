#include<iostream>
using namespace std;

class person{
    string name;
    int age;
    string adderess;
    public:
    person(string n,int a,string ad):name(n),age(a),adderess(ad){}
    
    void showdata(){
        cout<<"The adderess is:"<<adderess<<endl;
        cout<<"The name is :"<<name<<endl;
        cout<<"The age is :"<<age<<endl;
    }

};

class student:public person{
    string program;
    string semester;
    public:
    student(string n,int a,string ad,string p,string s):person(n,a,ad),program(p),semester(s){}

    void showdata(){
        person::showdata();
        cout<<"The program is :"<<program<<endl;
        cout<<"The semester is:"<<semester<<endl;
    }
};

class teacher:public person{
    string qualification;
    string department;
    public:
    teacher(string n,int a,string ad,string q,string d):person(n,a,ad),qualification(q),department(d){}

    void showdata(){
        person::showdata();
        cout<<"The qualification is:"<<qualification<<endl;
        cout<<"The department is:"<<department<<endl;
    }
};

int main(){
    student prasoon("Prasoon",20,"Daldale","opps","second");

    teacher manoj("Manoj",30,"Bharatpur","sir","oops");

    prasoon.showdata();
    manoj.showdata();
    return 0;
}