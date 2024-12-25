#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Enter two number :"<<endl;
    cin>>a>>b;
    try{
        if(b==0){
            throw(b);
        }
        else{
             int div = a/b;
        cout<<"The division is:"<<div<<endl;
        }
    }
    catch(int b){
       cout<<"The value of b can't be zero"<<endl;
    }
   return 0; 
}