#include<iostream>
using namespace std;

class GrandParent
{
    public:
    GrandParent()
    {
        cout<<"Grand Parent class constructor"<<endl;
    }
    ~GrandParent()
    {
        cout<<"Grand Parent class destructor"<<endl;

    }
    void display()
    {
        cout<<"I am user define function"<<endl;
    }
};

class Parent : protected GrandParent
{
    public:
    int x;
    Parent()
    {
        cout<<"Parent class constructor"<<endl;
    }
    ~Parent()
    {
        cout<<"Parent class destructor"<<endl;
    }
    Parent(int x){
        cout<<"Parent class parameterized constructor"<<endl;
    }
    void show1(){
        display();
    }
};

class Child : public Parent
{
    public:
    Child()
    {
        cout<<"Child class constructor"<<endl;
    }
    ~Child()
    {
        cout<<"Child class destructor"<<endl;
    }
    void show ()
    {
       Parent(3); 
       show1();
    }
};

int main ()
{
    Child c;
    c.show();
    return 0;
}
