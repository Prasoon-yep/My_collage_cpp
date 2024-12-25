#include<iostream>
using namespace std;

class array
{
    int array[5];
    int i,j,temp;
    public :
    void getdata();
    void sorting();
    void display()
    {
        cout<<"the value after sorting is : ";
        for(i=0;i<5;i++)
        {
            cout<<array[i]<<endl;
        }
    }

};
void array::getdata()
{
    cout<<"enter value int array :"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>array[i];
    }
}
void array::sorting()
{
    for(i=0;i<5-1;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(array[j]<array[i])
            {
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
}
int main()
{
    array a;
    a.getdata();
    a.sorting();
    a.display();
    return 0;
}
