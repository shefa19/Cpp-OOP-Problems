#include<iostream>
using namespace std;

class B;
class A
{
private:
    int valueA;

public:
    A(int value)
    {
        valueA = value;
    }
    friend int addData(A, B);
};

class B
{
private:
    int valueB;

public:
    B(int value)
    {
        valueB = value;
    }
    friend int addData(A, B);
};

int addData(A objA, B objB)
{
    return objA.valueA + objB.valueB;
}

int main()
{
    A a1(5);
    B b1(7);

    cout << "Sum of private data: " << addData(a1,b1) << endl;


    return 0;
}
