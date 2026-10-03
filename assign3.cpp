#include<iostream>
using namespace std;

class  Measurement
{
    public:
    int no;
    double coversionToCentimeter();
    double coversionToMillimeter();
    void display();

};

double Measurement::coversionToCentimeter(){
        double centiNo = no*100;
        return centiNo;
    }

double Measurement::coversionToMillimeter(){
        double milliNo = no*1000;
        return milliNo;
    }

void Measurement::display()
{
    cout<<"Conversion of meter to centimeter"<<endl;
    cout<<no<<"m = "<<coversionToCentimeter()<<"cm"<<endl;
    cout<<"Conversion of meter to millimeter"<<endl;
    cout<<no<<"m = "<<coversionToMillimeter()<<"mm"<<endl;
}

int main (void)
{
    Measurement m;
    int number;
    cout<<"Enter number for Measurement :";
    cin>>number;
    m.no = number;
    m.display();
    return 0;
}