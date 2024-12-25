#include<iostream>
using namespace std;

template <class T>
class area{
    T length;
    T breadth;
    public:
    T square(T a, T b){
        length = a;
        breadth = b;
        T area = length*breadth;
        return area;
    }
};
int main(){
    area <int>a;
    cout<<"the area of square is:"<<a.square(2,3)<<endl;
    area <float>b;
    cout<<"The float area is :"<<b.square(2.5,3.5)<<endl;
    return 0;
    
}