#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
// function objects: funciton wrapped in a class.
// so that it available like an object.
int arr[]={12,2,33,12,53,77};
sort(arr,arr+5);
sort(arr,arr+3,greater<int>());
for(int i=0;i<6;i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}