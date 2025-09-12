#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    float gpa;

public:
    Student()
    : name(""), roll(0), gpa(0.0) {}


    Student(string x, int y, float z)
    {
        name = x;
        roll = y;
        gpa = z;
    }

    Student(const Student &obj)
    {
        name = obj.name;
        roll = obj.roll;
        gpa = obj.gpa;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << "GPA  : " << gpa << endl;
    }
};

int main()
{
    Student st1("Shefa", 42, 3.95);
    Student st2 = st1;

    st2.display();


    return 0;
}
