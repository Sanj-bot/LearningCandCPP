#include <iostream>
using namespace std;
/*Base Class---Mummy Class....*/
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
    Employee() {} // needed as derived class calls it.
};
// Derived Class Syntax..
//  class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
//  {
//      class members/methods/etc...
//  };

// creating a programmer class derived from Employee Base class.

class Programmer : public Employee
{
    
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
         languageCode = 9;
    }
    
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    skillF.getData();
    return 0;
}