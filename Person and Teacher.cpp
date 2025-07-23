#include<iostream>
#include<string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string name, int age):name(name),age(age) {}

    virtual void display()
    {
        cout << "Name    : " << name << endl
            << "Age     : " << age << endl;
    }
};

class Teacher : public Person
{
protected:
    string subject;

public:
    Teacher(string name, int age, string subject)
    :Person(name,age), subject(subject) {}

    void display() override
    {
        Person :: display();

        cout << "Subject : " << subject << endl;
    }
};

int main()
{
    string name, subject;
    int roll;

    getline(cin,name);
    cin >> roll;
    cin.ignore();
    getline(cin,subject);

    Person* per = new Teacher(name,roll,subject);
    per->display();

    delete per;


    return 0;
}
