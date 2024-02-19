#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "enter id: ";
        cin >> id;
        count++;
        cout << endl;
    }
    void getData(void)
    {
        cout << "Id is: " << id << " and emp number: " << count << endl;

        cout << endl;
    }
    static void getCount(void)
    {
        cout << "The value of count is: " << count << endl;
    }
};
int Employee::count;
int main()
{
    Employee harry, rohan, lavish;
    // harry.id=1; harry.count=1; // cant do cause pvt.
    /*Ever object has their own, count. so we use static var, static var is written outside class.*/
    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();
    lavish.setData();
    lavish.getData();
    Employee::getCount();
    return 0;
}