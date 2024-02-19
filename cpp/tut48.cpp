#include <iostream>
using namespace std;
/*
case 1:
class B: public A{
 // order of exec of constr -> first A()->B()
};
case 2:
class A: public B, public C{
// order      ""       ""   -> first B()->C()->A()
};

Case 3:
class A: public B, virtual public C{
// order of exec of constr  -> first C()->B()->A()
};
*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printDataBase1(void)
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};




class Derived : public Base1, public Base2 //#this order matters
{
    private:
        int derived1, derived2;

    public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b) //#this order doesn't matter.
        {
            derived1 = c;
            derived2 = d;
            cout << "Derived class constr called"<<endl;
        }

        void printDataDerived(void)
        {
            cout<<" Value of derived1 :"<<derived1<<endl;
            cout<<"Value of  d------2 :"<<derived2<<endl;
        }
};

int main()
{
    Derived harry(1,2,3,4);
    harry.printDataDerived();
    return 0;
}