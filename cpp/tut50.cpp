#include <iostream>
using namespace std;

int main()
{
    int *arr=new int[3];
    arr[0]=10;
    *(arr+1)=20;
    arr[2]=30;
    delete[] arr;
    cout<<arr[0]<<arr[1]<<arr[2]<<endl;
    
    return 0;
}