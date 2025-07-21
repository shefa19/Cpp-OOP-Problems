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

    Student(string name, int roll, float marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }

    void showData()
    {
        cout << "Name: " << name;
        cout << ", Roll: " << roll;
        cout << ", Marks: " << marks << endl;
    }

    string highestMarkHolderName()
    {
        return name;
    }

    float getMarks()
    {
        return marks;
    }
};

int main()
{
    int n;
    cin >> n;

    string name;
    int roll;
    float marks;
    int obj = 0;
    float highestMarks = 0;

    Student* S[n];

    for(int i = 0; i < n; i++)
    {
        cin >> name >> roll >> marks;

        S[i] = new Student(name, roll, marks);

        if(marks > highestMarks)
        {
            highestMarks = marks;
            obj = i;
        }
    }

    for(int i = 0; i < n; i++)
    {
        S[i]->showData();
    }

    cout << "Highest Marks: " << highestMarks
         << " by " << S[obj]->highestMarkHolderName() << endl;

    for(int i = 0; i < n; i++)
    {
        delete S[i];
    }

    return 0;
}
