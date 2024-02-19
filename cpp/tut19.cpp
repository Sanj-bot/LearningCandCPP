#include<iostream>
using namespace std;

int sum(int a,int b)
{
    return (a+b);
}
//funciton overloading
int sum(int a, int b)
{
    return (a*b);
}


int main(){
//cout<<sum(10,20)<<endl;
cout<<sum(20,10)<<endl;


return 0;
}