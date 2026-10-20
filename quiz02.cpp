#include <iostream>
using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "p" << endl;
    }
    ~Parent()
    {
        cout << "D" << endl;
    }
};

class Child : protected Parent
{
public:
    void display()
    {
        Parent p;
        cout << "ok" << endl;
    }
    Child()
    {
        cout << "c" << endl;
    }
    ~Child()
    {
        cout << "D1" << endl;
    }
};

int main()
{
    Child c;
    c.display();
    return 0;
}