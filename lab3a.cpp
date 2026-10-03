#include<iostream>
using namespace std;


class Student
{  
public:
string name;
int age;

void study();
void sleep();
};
//  scope resolution operator (::)

void Student::study()
{
    cout<<name<<" is studing. "<<endl;
}

void Student::sleep()
{
    cout<<name<<" is sleeping. "<<endl;
}


int main(void){
    Student s;
    s.name = "Romeesa";
    s.age = 20;
    // function call
    s.study();
    s.sleep();
    return 0;
}