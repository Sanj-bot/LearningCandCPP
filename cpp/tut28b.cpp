#include <iostream>
using namespace std;
//if we remove & then values wont be  swapped.
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);
public:
    void indata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }

};
class c2
{   friend void exchange(c1 &, c2 &);
    int val2;

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};
// swapping two numbers...
void exchange(c1 &x, c2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}
int main()
{
    c1 oc1;
    c2 oc2;
    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1, oc2);
    cout << "Value after exchanging: ";

    oc1.display();
    cout << "Value after exchanging: "; 
     oc2.display();
    return 0;
}