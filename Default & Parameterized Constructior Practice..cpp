#include<iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Welcome to student profile!" << endl;
    }

    Student(string name, int roll, float gpa)
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "GPA : " << gpa << endl;
    }
};


int main()
{
    Student st, st1("Shefa", 42, 3.95);


    return 0;
}
