#include <iostream>
using namespace std;

class height
{
    int meter, centimeter;

public:
    void getdata()
    {
        cout << "Enter the value of meter and centimeter:" << endl;
        cin >> meter >> centimeter;
    }
    void display()
    {
        cout << "The value of meter is:" << meter << endl;
        cout << "The value of centimeter is:" << centimeter << endl;
    }
    friend height operator+(height obj1, height obj2);
};

height operator+(height obj1, height obj2)
{

    height temp;
    temp.meter = obj1.meter + obj2.meter;
    temp.centimeter = obj1.centimeter + obj2.centimeter;
    return temp;
}

int main()
{
    height h1, h2, hg;
    h1.getdata();
    h2.getdata();
    hg = h1 + h2;
    h1.display();
    h2.display();
    hg.display();
    return 0;
}