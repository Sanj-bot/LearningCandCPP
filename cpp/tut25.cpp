// #include <iostream>
// using namespace std;
// class Employee
// {
//     int id;
//     int salary;

// public:
//     void setId(void)
//     {
//         salary = 122;
//         cout << "Enter id: " << endl;
//         cin >> id;
//     }
//     void getId(void)
//     {
//         cout << "Id of Emp is:" <<id<< endl;
//     }
// };
//  int main()
// {
//     Employee fb[4];
//     for(int i=0;i<4;i++)
//     {
//         fb[i].setId();
//         fb[i].getId();

//     }
//     return 0;
// }

#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void PrintNumber()
    {
        cout<<"CN is:"<<a<<"+"<<b<<"i"<<endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c2.setData(3, 4);
    c3.setDataBySum(c1,c2);
    c3.PrintNumber();
    return 0;
}
