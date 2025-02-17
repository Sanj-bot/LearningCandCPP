#include <iostream>
using namespace std;

/*
syntax for inheriting in multiple inheritance
class DerivedC: visibility-mode base1, visibility-mode base2
{
        Class body of class "Derived"
}
*/

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "value of bs1: " << base1int << endl;
        cout << "value of bs2: " << base2int << endl;
        cout << "Sum of them: " << base1int + base2int << endl;
    }
};

int main()
{
    Derived harry;
    harry.set_base1int(25);
    harry.set_base2int(5);
    harry.show();
    return 0;
}