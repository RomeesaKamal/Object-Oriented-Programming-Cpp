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

// calling base dunction using derived class object

class Derived : public Base
{
   public:
};

int main(void)
{
    Derived d;
    d.show();
    return 0;
}