#include<iostream>
using namespace std;

class csit{
    string name;
    int a;
    public:
    friend void display(csit a, csit b);
    csit(string x,int y):name(x),a(y){};
};
void display(csit a,csit b){
    cout<<"The name of obj a is:"<<a.name<<endl;
    cout<<"The name of obj b is:"<<b.name<<endl;
    cout<<"The id of obj a is:"<<a.a<<endl;
    cout<<"The id of bj b is:"<<b.a<<endl;
}
int main(){
    csit a("Prasoon",1234);
    csit b("Mahesh",6969);
    display(a,b);
    return 0;
}