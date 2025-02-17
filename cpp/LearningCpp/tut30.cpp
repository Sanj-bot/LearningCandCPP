#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int, int); // constructor declaraion
    void printNumber()
    {
        cout << "Your number is: " << a << "+" << b << "i" << endl;
    }
};
Complex::Complex(int x, int y) // parameterized constructor

{
    a = x;
    b = y;
}
int main()
{ // implicit call
    Complex a(4, 6);
    // implicit call
    Complex b = Complex(5, 7);
    a.printNumber();
    b.printNumber();
    return 0;
}