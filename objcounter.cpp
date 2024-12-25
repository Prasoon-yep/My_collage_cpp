#include<iostream>
using namespace std;

class obj{
    static int objcounter;
    public:
    void objc(){
        objcounter++;
    }
    static int count(){
        return objcounter;
    }
};
int obj::objcounter=0;
int main(){
    obj obj1,obj2,obj3;
    obj1.objc();
    obj2.objc();
    obj3.objc();
    cout<<"The number of constructor is:"<<obj::count();
    return 0;    

}