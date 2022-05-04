#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st = "sujal_bhai";
    string st2;

    //opening files using constructor and writing it
    ofstream out("1000_file_write.txt");
    // writing in prile
    out << st;

    //opening  files using constructor and reading it
    ifstream in("1001_file_read.txt");
    // in >> st2;
    // cout << st2;
    
    // by this method we can just get a word but by below method we can read whole line but not whole file at once 

    getline(in, st2);
    cout << endl
         << st2;

    return 0;
}

/*

The useful classes for working with files in c++ are 
        fstreambase
        ifstream -> derived from fstreambase (read)
        ofstream -> derived from fstreambase (write)

*/

/*

in order to work with files in c++ , we will have to open it . primarily , there are 2 ways to open a file 
    -using the constructor 
    -using the member function open() of the class
*/