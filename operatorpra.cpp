#include<iostream>
using namespace std;

class complex{
    int real,img;
    public:

    void getdata(){
        cout<<"Enter real number and imiganery number:"<<endl;
        cin>>real>>img;
    }
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    complex operator+ (complex obj){
        complex temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
    }

};

int main(){
    complex c1,c2,rs;
    c1.getdata();
    c2.getdata();
    rs=c1+c2;
    rs.display();
    return 0;
}