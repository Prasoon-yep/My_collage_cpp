#include<iostream>
using namespace std;

int sum(int x=2,int y=3){
    return x+y;
}

int main(){
    cout<<sum()<<endl;
    cout<<sum(4,5);
    return 0;
}