#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void PrintData();
};
void Simple::PrintData()
{
    cout << "Value of data is: " << data1 << " and " << data2 << " and   " << data3;
}

int main()
{
    Simple s(1, 4);
    s.PrintData();
    return 0;
}