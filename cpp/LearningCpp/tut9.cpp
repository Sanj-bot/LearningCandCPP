#include<iostream>
using namespace std;


int main()
{   
    cout<<"Enter your age:"<<endl;
    int age;
    cin>>age;

        switch (age)
        {
        case 18:
        
            cout<<"You are 18";
            break;
        case 2:
            cout<<" You are 2 years old";
            break;
        default:
            cout<<"You dont Exist"<<endl;
        }

    return 0;
     
}