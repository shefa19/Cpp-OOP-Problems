#include<iostream>
using namespace std;

class ImagPart;

class RealPart
{
private:
    int real;

public:
    void setData(int real)
    {
        this -> real = real;
    }

    friend void printComplexNumber(RealPart &, ImagPart &);
};

class ImagPart
{
private:
    int imag;

public:
    void setData(int imag)
    {
        this -> imag = imag;
    }
    friend void printComplexNumber(RealPart &, ImagPart &);
};

void printComplexNumber(RealPart &objR, ImagPart &objI)
{
    cout << "The complex number is: " << objR.real;
    cout  << " + " << objI.imag << "i" << endl;
}

int main()
{
    int real, imag;
    cout << "Enter real part: ";
    cin >> real;
    cout << "Enter imaginary part: ";
    cin >> imag;

    RealPart r;
    ImagPart i;

    r.setData(real);
    i.setData(imag);

    printComplexNumber(r,i);


    return 0;
}
