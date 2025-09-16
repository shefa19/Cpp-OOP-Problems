#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main()
{
    ofstream file("MyData.txt", ios::app);

    if(file)
    {
        file << "Name: Shefaul\nRloo: 42" << endl;

        file.close();
        cout << "Data stored Successfully" << endl;
    }
    else
    {
        cerr << "File could not be open" << endl;
    }



    return 0;
}
