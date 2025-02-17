#include<iostream>
using namespace std;

void fun(int frequency);
int main()
{
    // for (int i = 0; i < 100; i++)
    // {
    //     cout<<i<<endl;
    // }
    
    // do
    // {
    //    cout<<"bolo Hello Hello"<<endl; /* code */
    // } while (false);
    fun(10);   

}
void fun(int frequency)

{
    int counter=frequency;
    int i=0;
    do
    {   i++;
        /* code */
        cout<<"Noi"<<endl;
    } while (i<=counter);
    
}
