#include <iostream>
#include <fstream>
using namespace std;

int main()
{ // connecting our file with hout stream
    // ofstream hout("sample60.txt");

    // string name[10];
    // for (int i = 0; i < 10; i++)
    // { // creating a name string and filling it with the string entered by the user.
    //     cout << "Enter your name:" << endl;
    //     cin >> name[i];
    //     // writing a string to the file.
    //     hout << "My name is " + name[i] + "\n ";
   
    // }
    //     hout.close();

        ifstream hin("sample60.txt");
        string content;
        hin>>content;
        cout<<"The content of this file is: "<<content;


    return 0;
}