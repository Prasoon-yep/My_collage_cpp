#include<iostream>
using namespace std;

class printer{
    public:
    void print(char a='*',int b=10){
        for(int i=0; i<b; i++){
            cout<<a<<endl;
        }
    }
};

int main(){
    printer p;
    p.print();
    p.print('$',5);
    return 0;
}