#include<iostream>
using namespace std;

class Print
{
public:
    void display(string name, int roll)
    {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
    }
    void display(string name, int roll, float gpa)
    {
        display(name, roll);
        cout << "GPA : " << gpa << endl;
    }
};

int main()
{
    Print p1, p2;

    p1.display("Shefaul", 42);
    p2.display("Sajol", 42, 3.95);



    return 0;
}
