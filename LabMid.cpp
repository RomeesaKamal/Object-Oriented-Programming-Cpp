#include <iostream>
using namespace std;

class Student;

class Result
{
    public:
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

void Process()
{
    Student s1; //------> step3
    Result r;
    Student *s = new Student; //------> step3
    r.showMarks(s1);
    cout << "Function call" << endl;
    delete s;
}

int main(void)
{
    Process(); //------> step4
    return 0;
}
