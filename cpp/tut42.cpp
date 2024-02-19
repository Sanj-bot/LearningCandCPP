#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "How are you" << endl;
    }
};
class base2
{

public:
    void greet()
    {
        cout << "Kaise ho" << endl;
    }
};
class Derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1::greet();
    }
};
class c{
    public:
    void say()
    {
        cout<<"Hello from C"<<endl;
    }
};

class d:public c{
    int a;
    public:
        void say()
        {
            cout<<"hello from D"<<endl;
        }
};


int main()
{
    // Ambiguity 1:

    d das;
    das.say();







    // Ambiguity 2:

    // base1 base1obj;
    // base1obj.greet();
    // base2 base2obj;
    // base2obj.greet();
    // Derived Anuj;
    // Anuj.greet();
    return 0;
}