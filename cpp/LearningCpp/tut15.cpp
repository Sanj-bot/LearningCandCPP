#include<iostream>
using namespace std;
int sum(int num1,int num2);


int main(){
    int n1,n2;
    n1=200;n2=201;
    cout<<sum(n1,n2);

return 0;
}
int sum(int num1, int num2)
{
    return (num1+num2);
}