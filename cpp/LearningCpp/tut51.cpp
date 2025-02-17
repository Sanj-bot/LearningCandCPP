#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imaginary;

public:
    void getData()
    {
        cout << "The real part is" << real << endl;
        cout << "The imaginary part is" << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{

    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr=new Complex;

    // (*ptr).setData(1, 54);   same as    ptr->setData(1,54);
    // (*ptr).getData();
    // array of objects:
    Complex *ptr1= new Complex[4];
    ptr1->setData(1,4);
    ptr1->getData();
    
    return 0;
}