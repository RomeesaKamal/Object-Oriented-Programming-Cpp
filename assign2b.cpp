#include<iostream>
using namespace std;

struct Student
{
    string name;
    int id;
    int semester;
    float marks[3];

    float totalMarks()
    {
        float sum = 0;
        for(int i=0; i<3; i++)
        {
            sum+=marks[i];
        }
        return sum;
    }

    float avgMarks()
    {
        float sum = 0;
        for(int i=0; i<3; i++)
        {
            sum+=marks[i];
        }
        return sum/3;
    }


    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Roll_No : "<<id<<endl;
        cout<<"Semester : "<<semester<<endl;
        cout<<"Marks of sub1 : "<<marks[0]<<endl;
        cout<<"Marks of sub2 : "<<marks[1]<<endl;
        cout<<"Marks of sub3 : "<<marks[2]<<endl;
        cout<<"Total Marks : "<<totalMarks()<<endl;
        cout<<"Average Marks : "<<avgMarks()<<endl;
    }


};

int main(){
    Student s;
    s.name = "Rome";
    s.id = 59;
    s.semester = 3;
    s.marks[0]=86;
    s.marks[2]=82;
    s.marks[1]=96;
    s.display();
    return 0;
}