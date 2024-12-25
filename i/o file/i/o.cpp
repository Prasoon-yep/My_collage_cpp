#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main(){
    string st="My name is prasoon";
    ofstream out("output.txt");
    out<<st;
     out.close();
     ifstream in("output.txt");
     if(in.eof()==0){
        getline(in,st);
        cout<<st;
     }
     return 0;
}