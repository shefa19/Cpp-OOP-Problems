#include<iostream>
#include<string>
using namespace std;

class Employee
{
public:
    string name;
    double salary;

    Employee(string name, double salary)
    {
        this -> name = name;
        this -> salary = salary;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    Employee John("John",45000);
    John.display();

    return 0;
}
