#include<iostream>
using namespace std;

class splitmony{
    float money;
    int numofper;
    float splitamt;
    public:

    void getdata(){

        cout<<"Enter the amount of money:"<<endl;
        cin>>money;
        cout<<"Enter the number of person in trip:"<<endl;
        cin>>numofper;
    }
    void split(){
        splitamt=money/numofper;
    }
    void display(){
        cout<<"The amount of split money is:"<<splitamt<<endl;
    }
};

int main(){
    splitmony friends;
    friends.getdata();
    friends.split();
    friends.display();
    return 0;
}