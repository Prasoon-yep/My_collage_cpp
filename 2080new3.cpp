#include<iostream>
using namespace std;

class student{
    int sid;
    float cgpa;
    public:
    student(int a,float b):sid(a),cgpa(b){}

    void display(){
        cout<<"the sid is :"<<sid<<endl;
        cout<<"the cgpa is:"<<cgpa<<endl;
    }

};
class doctor{
    int did;
    string h_name;
    public:
    doctor(int a,string b):did(a),h_name(b){}

    void display(){
        cout<<"the sid is :"<<did<<endl;
        cout<<"the cgpa is:"<<h_name<<endl;
    }

};
class person:public student,public doctor{
    int age;
    float salary;
    public:
     person(int sid, float cgpa, int did, string h_name, int a, float b) : student(sid, cgpa), doctor(did, h_name), age(a), salary(b) {}

    void display(){
        student::display();
        doctor::display();
        cout<<"the age is :"<<age<<endl;
        cout<<"The salary is:"<<salary<<endl;
    }
};

int main(){
    person a1(1234,3.25,1243,"cmc",24,40000);
    a1.display();
    return 0;
}