#include<iostream>
using namespace std;

template<class T, class D>
void getdata(T n,D b)
{
    T a=n;
    D c=b;
    D sum=a+c;
    cout<<"The sum is :"<<sum<<endl;
}
int main()
{
    getdata(5,4.5);
    return 0;
}  