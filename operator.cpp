#include<iostream>
using namespace std;

class complex{
    int real,img;
    public:

    void getdata(){
        cout<<"Enter real and imaginary number:"<<endl;
        cin>>real;
        cin>>img;

    }
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    complex operator+(complex obj){
        complex temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
    }
};

int main(){
    complex c1,c2,res;
    c1.getdata();
    c2.getdata();
    res=c1+c2;
    res.display();
}