#include <iostream>
using namespace std;

class CSIT
{
public:
    virtual void display()
    {
        cout << "My faculty is csit" << endl;
    }
};
class BIM : public CSIT
{
    void display()
    {
        cout << "My faculty is BIM" << endl;
    }
};

int main()
{
    CSIT *baseobj;
    BIM deriveobj;
    baseobj=&deriveobj;
    baseobj->display();

    return 0;
} 