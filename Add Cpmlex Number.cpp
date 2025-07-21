#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:

    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex& other)
    {
        return Complex(real + other.real, imag + other.imag);
    }

    void showData()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex C1(3, 2);
    Complex C2(4, 5);

    Complex result = C1 + C2;

    cout << "First Complex Number: ";
    C1.showData();

    cout << "Second Complex Number: ";
    C2.showData();

    cout << "Sum = ";
    result.showData();

    return 0;
}
