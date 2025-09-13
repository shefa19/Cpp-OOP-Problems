#include<iostream>
using namespace std;

class Person
{
public:
    string name;

};

class Student : public Person
{
public:
    int roll;
};

class Exam : public Student
{
public:

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
    Exam e;

    e.name = "Shefaul";
    e.roll = 42;
    e.gpa = 3.92;

    e.display();


    return 0;
}
