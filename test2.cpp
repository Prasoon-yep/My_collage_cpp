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
int main(){
    person prasoon("prasoon",20,"daldale");
    prasoon.showdata();
    return 0;
}