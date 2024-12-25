#include<iostream>
using namespace std;

class solution{
    int a1[5];
    int a2[5];
    public:
    void getdata1(){
        cout<<"Enter data into first array:"<<endl;
        for(int i=0;i<5;i++){
            cin>>a1[i];
        }
    }
    void getdata2(){
        cout<<"Enter data into second array:"<<endl;
        for(int i=0;i<5;i++){
            cin>>a2[i];
        }
    }
    void display1(){
        cout<<"The data you entered in first array:"<<endl;
        for(int i=0;i<5;i++){
            cout<<a1[i]<<endl;
        }
    }
     void display2(){
        cout<<"The data you entered in second array:"<<endl;
        for(int i=0;i<5;i++){
            cout<<a2[i]<<endl;
        }
    }
};
int main(){
    solution array;
    array.getdata1();
    array.getdata2();
    array.display1();
    array.display2();
    return 0;
}