#include<iostream>
using namespace std;

class Student 
{
    private:
    int* age;
    
    public:
    Student()
    {
        age = new int;
        *age = 20;
        cout<<"Age : "<<*age<<endl;
    }
    ~Student()
    {
        delete age;
        cout<<"Age : "<<*age<<endl;
    }
};

int main (void)
{
    Student s1;
    return 0;
}