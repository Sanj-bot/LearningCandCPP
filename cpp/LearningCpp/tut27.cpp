#include <iostream>
using namespace std;
// forward declaration
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealcomplex(Complex, Complex);
    int sumCompcomplex(Complex, Complex);
};
class Complex
{
    int a, b;
    // individually declaring fun() as friends
    // friend int Calculator::sumRealcomplex(Complex o1, Complex o2);
    // friend int Calculator::sumCompcomplex(Complex o1, Complex o2);
    // declaring entire calc class as friend.
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is: " << a << "+" << b << "i" << endl;
    }
};
int Calculator::sumRealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumCompcomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res1 = calc.sumRealcomplex(o1, o2);
    int res2 = calc.sumCompcomplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is: " << res1 << endl;

    cout << "The sum of Complex part of o1 and o2 is: " << res2 << endl;
    return 0;
}