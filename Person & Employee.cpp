#include<iostream>
#include<string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:


    Person(string name, int age): name(name),age(age) {}

    virtual void display()
    {
        cout << "Name: " << name << endl
            << "Age: " << age << endl;
    }
};

class Employee : public Person
{
protected:
    int EmpID;

public:


    Employee(string name, int age, int EmpID)
        :Person(name, age), EmpID(EmpID)
    {
    }

    void display() override
    {
        Person :: display();
        cout << "Employee ID: " << EmpID << endl;
    }
};

int main()
{
    string name;
    int age, EmpID;
    cin >> name >> age >> EmpID;

    Person* ptr = new Employee(name, age, EmpID);
    ptr->display();

    delete ptr;




    return 0;
}
