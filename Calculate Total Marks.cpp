#include<iostream>
using namespace std;

class Math;

class Physics
{
private:
    int phyMarks;

public:
    void setData(int marks)
    {
        phyMarks = marks;
    }

    friend int totalMarks(Physics &, Math &);
};

class Math
{
private:
    int mathMarks;

public:
    void setData(int marks)
    {
        mathMarks = marks;
    }

    friend int totalMarks(Physics &, Math &);
};

int totalMarks(Physics &P, Math &M)
{
    return P.phyMarks + M.mathMarks;
}

int main()
{
    int physics, math;
    cout << "Enter Physics marks: ";
    cin >> physics;
    cout << "Enter Math marks: ";
    cin >> math;

    Physics p;
    Math m;

    p.setData(physics);
    m.setData(math);

    cout << "Total marks: " << totalMarks(p,m) << endl;


    return 0;
}
