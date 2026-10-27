
#include <iostream>
using namespace std;

class Student; // Forward declaration

class Result
{
public:
    int calculateMarks(Student s);
};

class Student
{
private:
    int roll_no;
    int marks;

    friend int Result::calculateMarks(Student s);

public:
    Student()
    {
        roll_no = 59;
        marks = 84;
    }
};

int Result::calculateMarks(Student s)
{
    int bonus_marks = 2;
    int newMarks = s.marks + bonus_marks;
    return newMarks;
}

int main()
{
    Student s;
    Result r;

    cout << "Final marks: " << r.calculateMarks(s) << endl;

    return 0;
}
