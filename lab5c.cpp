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

// calling base class  from derived class 

class Derived : public Base
{
   public:
   // Calling base function inside derived class
   void display()
   {
    show();
   }
};

int main(void)
{
    Derived d;
    d.display();
    return 0;
}