#include<iostream>
using namespace std;

class solution{
    int a1[5];
    public:
    void getdata1(){
        cout<<"Enter data into first array:"<<endl;
        for(int i=0;i<5;i++){
            cin>>a1[i];
        }
    }
    void sorting(){
        for(int i=0;i<4;i++){
            for(int j=i+1;j<5;j++){
                if(a1[j]<a1[i]){
                    int temp=a1[j];
                    a1[j]=a1[i];
                    a1[i]=temp;
                }
            }
        }
    }
    void display(){
        cout<<"The data after sorting is:"<<endl;
        for(int i=0;i<5;i++){
            cout<<a1[i]<<endl;
        }
    }
};
int main(){
    solution sort;
    sort.getdata1();
    sort.sorting();
    sort.display();
    return 0;
}