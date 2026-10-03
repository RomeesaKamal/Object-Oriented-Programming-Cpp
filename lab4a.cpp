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

class Derived1 : protected Base
{
   public:
   void display()
   {
    show();
   }
};

class Derived2 : protected Derived1
{
   public:
   void display2(){
    //Derived1 d;
    show();
   }
};

int main()
{
    Derived1 d2;
    d2.display();
    return 0;
}
