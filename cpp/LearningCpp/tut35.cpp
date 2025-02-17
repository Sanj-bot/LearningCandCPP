// destructors
#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "contr called: " << count << endl;
    }

    ~num()
    {
        cout << "destr called: " << count << endl;
        count--;
    }
}

int
main()
{   cout<<"Inside main():"<<endl;
    cout<<"Creating 1st ojb n1"<<endl;
    num n1;
    {
        cout<<"Entering block"<<endl;
        cout<<"Creatin 2 more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
        
    }
    cout<<"Back to main"<<endl;
    return 0;
}