#include<iostream>
using namespace std;

class Employee
{
    private:
        int a,b,c;// employee functions can only access it.
    public:
        int d,e;
        void setData(int a1,int b1,int c1);// only declaration.
        void getData()
        {
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
            cout<<d<<endl;
            cout<<e<<endl;
        }

};

void Employee :: setData(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    Employee Sanjay;
    Sanjay.setData(1,2,5);
   // Sanjay.a=2122222;// throws error, cause a is private. pvt can be modified using functions of Employee Class...
    Sanjay.d=21;
    Sanjay.e=212;
    Sanjay.getData();

return 0;
}