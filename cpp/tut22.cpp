#include <iostream>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
   
    void ones(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number";
    cin >>s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) != '0' && s.at(i) != '1') // important
        {
            cout << "Incorrect binary format" << endl;
            break;
        }
    }
}
void binary::ones(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else  if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    for (int j = 0; j < s.length(); j++)
    {
        cout << s.at(j);
    }
}
int main()
{
    binary b;
    b.read();
  //  b.chk_bin(); #private would throw error if called from main().
    b.ones();
    b.display();

    return 0;
}