#include<iostream>
using namespace std;
int sum(int a,int b);
int main(){


    int sumvar=sum(10,23);
    cout<<sumvar<<endl;

return 0;
}
int sum(int a, int b)
{
    int c;
    c=(a+b);
    return c;
}