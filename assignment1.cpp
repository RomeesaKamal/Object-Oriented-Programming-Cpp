#include <iostream>
using namespace std;


class Book
{
public:

    int bId;
    string title;
    string author;
    float price;
    bool aStatus;
    void display ()
    {
    cout<<"Book ID = "      << bId   << endl;
    cout<<"Book Title = "   << title << endl;
    cout<<"Book Author = "  << author   << endl;
    cout<<"Book Price = "   << price << endl;
    };

void issueBook(){
    if (aStatus ==  true)
    {
        aStatus = false;
        cout << "Book is succesfully issued." << endl;
    }
    else
    {
         cout << "Book is already issued." << endl;
    }   
}

void returnBook(){
     if (aStatus ==  false)
    {
        aStatus = true;
        cout << "Book returned successfully." << endl;
    }
    else
    {
        cout << "Book is already available." << endl;
    }
}

void changePrice(){
    cout<< "Enter new price for book :"<<endl;
    cin>>price;
}
};



int main()
{
    Book obj;
    obj.bId     = 1;
    obj.author  =   "Rome";
    obj.title   =   "OOP";
    obj.price   = 300;
    obj.aStatus = true;
   
    obj.display();
    obj.issueBook();
    obj.returnBook();
    obj.changePrice();



    return 0;
}
