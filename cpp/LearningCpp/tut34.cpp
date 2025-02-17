#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number(){
        a=0;
    }
    Number(int num)
    {
        a = num;
    
    }
    Number(Number &obj)
    {   cout<<"Copy constr called"<<endl;
        a=obj.a;
    }
    
    void display()
    {
        cout<<"The number for this object is "<< a <<endl;
    }
};
 int main()
{
    Number x,y,z(45);
    x.display();
    y.display();
    z.display();
    // demand: z1 should exactly resemble z or x or y.
    Number z1(z);

    z1.display();
    Number z2;
    z2=z; // copy constructor not called.
    Number z3=z;// copy constr invoked. 


    return 0;
}