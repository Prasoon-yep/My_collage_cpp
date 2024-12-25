#include<iostream>
using namespace std;

template <class T>

T sum(T x,T y){
    return x+y;
}
template <class T>
T sum(T x,T y,T z){
    return x+y+z;
}
template<class T>
T sum(T a,T b,T c,T d){
    return a+b+c+d;
}


int main(){
    cout<<sum(2,3)<<endl;
    cout<<sum(2,3,4)<<endl;
    cout<<sum(2,3,4,5);
    return 0;;
}