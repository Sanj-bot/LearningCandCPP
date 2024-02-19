#include<iostream>
using namespace std;
static int array2[20];
int main()
{
int *array=array2;
for(int i=0;i<20;i++)
cout<<*(array+i)<<endl;

return 0;
}