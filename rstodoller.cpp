#include<iostream>
using namespace std;

class Rupee{
    double amount;
    double rupee;
    public:
    Rupee(double a):amount(a){}

    void dollertors(){
        rupee=amount*133;
    }

    void display(){
        cout<<"The amount is:Rs"<<rupee<<endl;
    }
};
class Dollor{
    double amount;
    double dollor;
    public:
    Dollor(double a):dollor(a){}

    void rstodoller(){
        dollor=amount/133;
    }
    void display(){
        cout<<"the doller is:$"<<dollor<<endl;
    }
};

int main(){
    int choice;
    double a,b;
    cout<<"1.convert dollor to rupee"<<endl;
    cout<<"2.convert rupee to dollor"<<endl;
    cin>>choice;

    if(choice==1){
        cout<<"Enter the dollor:"<<endl;
        cin>>a;
        Rupee rs(a);
        rs.dollertors();
        rs.display();
    }
    else if(choice==2){
        cout<<"Enter the rupee:"<<endl;
        cin>>b;
        Dollor dl(b);
        dl.rstodoller();
        dl.display();
    }
    else{
        cout<<"Invalide choice"<<endl;
    }
    return 0;
}