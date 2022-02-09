#include<iostream>
#include<fstream>

using namespace std;
/*These are some useful classes for working with files in C++

fstreambase
ifstream --> derived from fstreambase
ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

Using the constructor
Using the member function open() of the class
*/

int main(){
    string st = "Harry bhai";
    // Opening files using constructor and writing it
    ofstream out("sample.txt"); // Write operation
    out<<st;

    return 0;
}
