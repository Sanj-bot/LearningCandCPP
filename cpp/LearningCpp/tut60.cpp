#include <iostream>
#include<fstream>

using namespace std;

// useful classes for working with files in cpp
/*
    The useful classes for working with files in c++ are:
    1. fstreambase
    2. ifstream --> derived from fstreambase
    3. ofstream --> derived from fstreambase
    //
    2 ways to open a file:
    1. Using the constructor
    2. Using the member function open() of the class.
*/
int main()
{
    string st="harry Bhai";
    string st2;
    // opening files using constructor and writing it.
    // ofstream out("sample60.txt");// write operation
    // out<<st;

    // opening files using constructor and reading it.
    ifstream in("sample60b.txt"); // read operation
    //in>>st2;
    //cout<<st2;// pura content nahi aaya.
    getline(in,st2);
    cout<<st2<<endl;
    getline(in,st2);
    cout<<st2;

    return 0;
}