#include<iostream>
#include<string>
using namespace std;

class Student
{
protected:
    string name;
    int roll;

public:
    Student(string name, int roll):name(name),roll(roll) {}

    virtual void display()
    {
        cout << "Name: " << name << endl
            << "Roll: " << roll << endl;
    }
};

class GraduateStudent : public Student
{
protected:
    string thesisTitle;

public:
    GraduateStudent(string name, int roll, string thesisTitle)
    :Student(name,roll), thesisTitle(thesisTitle) {}

    void display() override
    {
        Student :: display();
        cout << "Thesis Title: " << thesisTitle << endl;
    }
};

int main()
{

    string name, thesisTitle;
    int roll;

    cin >> name >> roll >> thesisTitle;

    Student* obj = new GraduateStudent(name,roll,thesisTitle);

    obj->display();



    return 0;
}
