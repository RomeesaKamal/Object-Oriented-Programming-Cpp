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

class Derived
{   
    public:
        void display()
        {
        Base b;
        b.Base::show();
        }
};

int main(void)
{
    Derived d;
    d.display();
    return 0;
}
