#include<iostream>
using namespace std;

class Rectangle
{
private:
    float length , breadth;

public:

    Rectangle() : length(0.0), breadth(0.0) {}

    Rectangle(float length, float breadth)
    {
        this-> length = length;
        this-> breadth = breadth;
    }

    Rectangle operator+(Rectangle obj)
    {
        return Rectangle(length + obj.length, breadth + obj.breadth);
    }

    void display()
    {
        cout << "Resultant Rectangle: Length = " << length
                << ", Breadth = " << breadth << endl;
    }
};


int main()
{
    float l1, b1, l2, b2;
    cout << "Enter length and breadth of first rectangle: ";
    cin >> l1 >> b1;
    cout << "Enter length and breadth of second rectangle: ";
    cin >> l2 >> b2;

    Rectangle R1(l1, b1);
    Rectangle R2(l2, b2);

    Rectangle result = R1 + R2;
    result.display();

    return 0;
}
