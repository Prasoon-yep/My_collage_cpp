#include<iostream>
#include<fstream>
using namespace std;

class student{
    public:
    int roll;
    string name,section;

    student(int x,string y,string z):roll(x),name(y),section(z){}

    void display(){
        cout<<"The roll is:"<<roll<<endl;
        cout<<"The name is:"<<name<<endl;
        cout<<"The section is:"<<section<<endl;
    }
    void save(){
    ofstream std("save.txt");
    std<<roll<<endl;
    std<<name<<endl;
    std<<section<<endl;
    std.close();
    }
};

int main(){
    student prasoon(10,"manoj","elephant");
    prasoon.display();
    prasoon.save();
    return 0;
}