#include<iostream>
using namespace std;


class Student
{
private:
    string name;
    int roll;
    float gpa;

public:
    Student(string nam, int roll, float gpa)
    {
        this->name = nam;
        this->roll = roll;
        this->gpa = gpa;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "GPA : " << gpa << endl;
    }
};

int main()
{
    Student shefa("Shefaul", 42, 3.95);

    shefa.display();


    return 0;
}
