#include<iostream>
using namespace std;

class Person
{
public:

    Person()
    {
        cout << "Person object create." << endl;
    }

    ~Person()
    {
        cout << "Person object destroyed." << endl;
    }
};

int main()
{
    Person P1;

    return 0;
}
