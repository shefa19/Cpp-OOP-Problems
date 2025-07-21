#include<iostream>
using namespace std;

class Rectangle
{
public:
    double length, width;

    Rectangle()
    {
        length = 0;
        width = 0;
    }
    Rectangle(double length, double width)
    {
        this -> length = length;
        this -> width = width;
    }

    double area()
    {
        return length * width;
    }
};

int main()
{
    Rectangle R1(5,10);

    cout << "Area: " << R1.area() << endl;


    return 0;
}
