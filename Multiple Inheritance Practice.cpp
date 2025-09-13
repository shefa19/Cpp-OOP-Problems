#include<iostream>
using namespace std;

class Teacher
{
public:
    string subject;
};

class Sport
{
public:
    string game;
};

class Student : public Teacher, public Sport
{
public:
    string name;

    void display()
    {
        cout << "Name   : " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Game   : " << game << endl;
    }
};

int main()
{
    Student shefa;

    shefa.name ="Shefaul";
    shefa.subject = "OOP";
    shefa.game = "Football";

    shefa.display();


    return 0;
}
