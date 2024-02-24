#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Harry
{
public:
    T1 a;
    T2 b;
    T3 c;
    Harry(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a: " << a << endl;
        cout << "The value of b: " << b << endl;
        cout << "The value of c: " << c << endl;
    }
};
int main()
{
    Harry<> h(4, 6.4, 'D');
    h.display(); cout<<endl;
    Harry<float, char, char> i(4.3,'o','w');
    i.display();                                     

    return 0;
}