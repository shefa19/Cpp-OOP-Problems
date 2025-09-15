#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    float gpa;

public:
    friend void setData(Student &, string , int , float);

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "GPA : " << gpa << endl;
    }
};

void setData(Student &obj, string name, int roll, float gpa)
{
    obj.name = name;
    obj.roll = roll;
    obj.gpa = gpa;
}

int main()
{
    Student shefa;
    setData(shefa, "Shefaul", 42, 3.95);

    shefa.display();


    return 0;
}
