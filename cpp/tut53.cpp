#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A & setData(int a)
    {
       this->a=a;
        return *this;
    }
    void getData()
    {
        cout << "Value of a: " << a;
    }
};
int main()
{   // (this) is a keyword which is a pointer which points to the object.
    A a;
    a.setData(4).getData();
    return 0;
}