#include<iostream>
#include<string>
using namespace std;

class Book
{
public:
    string title;
    float price;

    Book(string title, float price)
    {
        this -> title = title;
        this -> price = price;
    }
    Book(const Book &obj)
    {
        title = obj.title;
        price = obj.price;
    }
    void display()
    {
        cout << "Title: " << title << ", Price: " << price << endl;
    }
};
int main()
{
    Book B1("C++Book",500), B2 = B1;

    B1.display();
    B2.display();


    return 0;
}
