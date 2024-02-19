#include<iostream>
using namespace std;

inline int fibo(int x)
{
    if(x<2)
    {
        return 1;

    }
    else
    {
        return fibo(x-2)+fibo(x-1);
    }
}
int main(){
int result=fibo(10);
cout<<result<<endl;
return 0;
}