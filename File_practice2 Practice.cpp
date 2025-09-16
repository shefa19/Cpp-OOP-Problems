#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main()
{
    fstream file("MyData.txt", ios::in | ios::out | ios::app);

    if(file.is_open())
    {
        file << "Name: Rafsan\nRoll: 1" << endl;

        file.seekg(0);

        string line;
        while(getline(file,line))
        {
            cout << line << endl;
        }
        file.close();
    }
    else
    {
        cout << "File could not be open" << endl;
    }


    return 0;
}
