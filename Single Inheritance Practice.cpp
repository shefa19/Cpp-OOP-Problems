#include<iostream>
using namespace std;

class Person
{
public:
    string name;

    void print()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
public:
    int roll;
    float gpa;


    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "GPA : " << gpa << endl;
    }
};

int main()
{
    Student shefa;

    shefa.name = "Shefaul";
    shefa.roll = 42;
    shefa.gpa = 3.94;

    shefa.display();


    return 0;
}
