#include<iostream>
#include<fstream>
using namespace std;
 class Details
 {
   string a,b;
   float price;
    public:
    void deteails(string name,string adderess)
    {
        a=name;
        b=adderess;
    }
    void bill(float unit)
    {
        if(unit<50)
        {
            price=unit*24;
        }
        else if(unit>50&&unit<75)
        {
            price=unit*30;
        }
        else{
            price=unit*34;
        }
    }
    void display()
    {
        cout<<"Your name is:"<<a<<endl;
        cout<<"Your adderess is:"<<b<<endl;
        cout<<"-------------------------------------------"<<endl;
        cout<<"Your total price is:"<<price;
    }
    void save(){
        ofstream output("bill.txt");
        output<<"Your name is:"<<a<<endl;
        output<<"Your adderess is:"<<b<<endl;
        output<<"-------------------------------------------"<<endl;
        output<<"Your total price is:"<<price;
    }
    void iffun(){
        string st;
        ifstream input("bill.txt");
        if(input.eof()==0){
            getline(input,st);
            cout<<st<<endl;
            getline(input,st);
            cout<<st<<endl;
        }
    }
    
 };
 int main()
 {
    string name,adderess;
    float unit;
    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"Enter your adderess:"<<endl;
    cin>>adderess;
    cout<<"Enter the unit:"<<endl;
    cin>>unit;
    Details costumer;
    costumer.deteails(name,adderess);
    costumer.bill(unit);
    costumer.display();
    costumer.save();
    costumer.iffun();
    return 0;
 }