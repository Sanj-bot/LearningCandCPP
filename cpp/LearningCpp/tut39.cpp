#include<iostream>
using namespace std;
// access modifiers
class Base{
        
    //private:
       // int b;
    protected:
        int a;

    public:
        Base()
        {
            a=20;
         //   b=21;
        }
    void resultBase();
};
void Base:: resultBase()
{
    cout<<a<<endl;
}
/* for a protected member:
                              public derivation       private Derivation          Protected derivation
    1. Private   members:       Not Inherited         Not Inherited                 Not Inherited
    2. Protected members:       Protected               Private                         Protected
    3. Public    members:       public                   private                        Protected 
*/

class Derived : public Base{
public:
    Derived()
    {
        a=212;
    }
    void result();

};
void Derived :: result()
{
    cout<<a<<endl;
}
int main(){
    Base bob;
    bob.resultBase();
    Derived dada;
    dada.result();
    return 0;
return 0;
}