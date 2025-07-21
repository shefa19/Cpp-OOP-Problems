#include<iostream>
using namespace std;

class Centimeter;

class Meter
{
private:
    int meterValue;

public:
    Meter(int value)
    {
        meterValue = value;
    }

    friend int CalculateTotalCentimeter(Meter, Centimeter);
};

class Centimeter
{
private:
    int cmValue;

public:
    Centimeter(int value)
    {
        cmValue = value;
    }

    friend int CalculateTotalCentimeter(Meter, Centimeter);
};

int CalculateTotalCentimeter(Meter objM,Centimeter objC)
{

    return (objM.meterValue*100) + objC.cmValue;
}

int main()
{
    int meter, centimeter;
    cout << "Enter value in meter: ";
    cin >> meter;
    cout << "Enter value in centimeter: ";
    cin >> centimeter;

    Meter M(meter);
    Centimeter CM(centimeter);

    cout << "Total in centimeter: " << CalculateTotalCentimeter(M,CM) << endl;


    return 0;
}
