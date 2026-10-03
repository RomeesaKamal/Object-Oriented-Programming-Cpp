#include<iostream>
using namespace std;



class Student
{
private:
    float marks[3];

public:
    int semester;
    string name;
    int id;

    void display(void)
    {
        cout << "Name : " << name << endl;
        cout << "Roll_No : " << id << endl;
        cout << "Semester : " << semester << endl;
        cout << "Marks of sub1 : " << marks[0] << endl;
        cout << "Marks of sub2 : " << marks[1] << endl;
        cout << "Marks of sub3 : " << marks[2] << endl;
        cout << "Total Marks : " << totalMarks() << endl;
        cout << "Average Marks : " << avgMarks() << endl;
    }

    float totalMarks(void)
    {
        float sum = 0;

        for(int i = 0; i < 3; i++)
        {
            sum += marks[i];
        }

        return sum;
    }

    float avgMarks(void)
    {
        float sum = 0;

        for(int i = 0; i < 3; i++)
        {
            sum += marks[i];
        }

        return sum / 3;
    }

    void setMarksValue()
    {

        cout << "Enter marks of 3 subjects: ";
        for(int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }
};

int main(){
    Student s;
    s.name = "Rome";
    s.id = 59;
    s.semester = 3;
    s.setMarksValue();
    s.display();
    return 0;
}