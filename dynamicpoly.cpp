#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square" << endl;
    }
};

int main(){
    Shape *shape_pointer1,*shape_pointer2;
    Circle c;
    Square s;
    shape_pointer1 = &c;
    shape_pointer2 =&s;
    shape_pointer1->draw();
    shape_pointer2->draw();
    return 0;
}