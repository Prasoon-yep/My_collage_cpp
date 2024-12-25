#include<iostream>
using namespace std;
template <class T,class A>
A sum(T a,A b){
    return a+b;
}
int main(){
    cout<<"The sum is:"<<sum(2,2.5)<<endl;
    return 0;
}