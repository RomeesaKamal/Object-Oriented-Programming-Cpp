#include <iostream>
using namespace std;

class Base
{
    public:
    void show()
    {
    cout<<"Function of base class"<<endl;
    }

};
// calling base class function using Base object in main
int main(void)
{
    Base b;
    b.show();
    return 0;
}


