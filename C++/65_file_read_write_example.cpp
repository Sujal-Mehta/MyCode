#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    string read;

    //connecting our file with hout stream
    ofstream hout("1000_file_write.txt");

    //taking name
    cout << "Enter Your Name : ";
    cin >> name;

    // writting a string in the file
    hout << name << endl;
    hout << "My name is : " + name;

    hout.close();

    ifstream hin("1001_file_read.txt");
    hin >> read;
    cout << "The read data are : " << read << endl;

    hin.close();
    return 0;
}