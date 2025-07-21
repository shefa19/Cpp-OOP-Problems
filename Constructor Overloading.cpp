#include<iostream>
using namespace std;

class Rectangle
{
private:
    double length, width;

public:
    Rectangle()
    {
        length = 1;
        width = 1;
    }

    Rectangle(double square)
    {
        length = width = square;
    }

    Rectangle(double length, double width)
    {
        this -> length = length;
        this -> width = width;
    }

    double getArea()
    {
        return length * width;
    }
};

int main()
{
    double squareSide, length, width;

    cout << "Enter side for square: ";
    cin >> squareSide;
    cout << "Enter length and width for rectangle: ";
    cin >> length >> width;

    Rectangle R1, R2(squareSide), R3(length,width);

    cout << "Default Area: "<< R1.getArea() << endl;
    cout << "Square Area: " << R2.getArea() << endl;
    cout << "Rectangle Area: " << R3.getArea() << endl;


    return 0;
}
