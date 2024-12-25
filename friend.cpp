#include<iostream>
using namespace std;

class csit{
    int a;
    public:
    friend int sum(csit x,csit y);
    void getdata(){
        cout<<"enter a number:"<<endl;
        cin>>a;
    }
};

int sum(csit x,csit y){
    return x.a+y.a;
}
int main(){
    csit x,y;
    x.getdata();
    y.getdata();
    cout<<"the sum is:"<<sum(x,y);
    return 0;
}