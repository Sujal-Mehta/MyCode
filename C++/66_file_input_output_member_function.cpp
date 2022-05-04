#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    ifstream in;
    string st, str;

    /* 

    //opening file using member function
    out.open("1000_file_write.txt");
    //writing file using member function
    out << "This is me\n";
    out << "This is also me\n";

    //closing file
    out.close();

*/

    /* 
    //opening file for reading using member function
    in.open("1001_file_read.txt");
    //reading in this two variable
    in >> st >> str;
    //displaying the read data which is in variable
    cout << st << str;

    //closing file
    in.close();
*/

    in.open("1001_file_read.txt");

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    return 0;
}