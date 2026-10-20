#include<iostream>
using namespace std;

class Base
{
    public:
    void show()
    {
    cout<<"Function of base class"<<endl;
    }

};

// calling base  class  without inheritance

class Derived1
{
    public:
    void display()
    {
    Base b;
    b.show();
    }
};



int main(void)
{
    Derived1 d;
    d.display();
    return 0;
}