#include<iostream>
using namespace std;

template <class T>
class sumgaram{
    T a;
    T b;
    public:
    T sum(T a,T b){
        return a+b;
    }
};
int main(){
    sumgaram <int>x;
    cout<<"the sum of integer is:"<<x.sum(2,3)<<endl;
    sumgaram<float>y;
    cout<<"the sum of float is:"<<y.sum(2.5,3.6)<<endl;
    return 0;
}
