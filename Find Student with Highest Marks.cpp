#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    float marks;

public:
    void input(string, int, float);

    void display();

};

void Student :: input(string name, int roll, float marks)
{
    this -> name = name;
    this -> roll = roll;
    this -> marks = marks;
}

void Student :: display()
{
    cout << "Highest Marks: " << name << "(" << marks << ")" << endl;
}


int main()
{
    int N;
    cin >> N;

    Student S[N];

    string name; int roll, studentObj = 0; float marks, highestM = 0;
    for(int i=0; i<N; i++)
    {
        cin >> name >> roll >> marks;

        S[i].input(name,roll,marks);

        if(marks > highestM)
        {
            highestM = marks;
            studentObj = i;
        }
    }
    S[studentObj].display();


    return 0;
}
