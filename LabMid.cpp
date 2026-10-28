#include <iostream>
using namespace std;

class Student;

class Result
{
public:
    void Process();
    void showMarks(Student s1);
};

class Student
{
private:
    int marks;
    friend void Result::showMarks(Student s1); //------> step2

public:
    // Student(int x) {
    //     cout << "parametrized constructor" << endl; //------> step1
    // }
    Student()
    {
        marks = 83;
    }
    ~Student()
    {
        cout << "Destructor" << endl; //------> step1
    }
};

void Result::showMarks(Student s1)
{
    cout << "Marks = " << s1.marks << endl;
}

void Result::Process()
{
    Student s1;               //------> step3
    Student *s = new Student; //------> step3
    showMarks(s1);
    cout << "Function call" << endl;
    delete s;
}

int main(void)
{
    Result r;
    r.Process(); //------> step4
}
