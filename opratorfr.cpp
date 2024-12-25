#include<iostream>
using namespace std;

class time{
    int hour,min;
    public:

    void getdata(){
        cout<<"Enter hour and minut"<<endl;
        cin>>hour;
        cin>>min;
    }
    void display(){
        cout<<hour<<"hr : "<<min<<"min"<<endl;
    }
    friend time operator+(time,time);
};

time operator+(time obj1,time obj2){
    time temp;
    temp.hour=obj1.hour+obj2.hour;
    temp.min=obj1.min+obj2.min;
    return temp;
}

int main(){
    time t1,t2,tm;
    t1.getdata();
    t2.getdata();
    tm=operator+(t1,t2);
    tm.display();
    return 0;
}