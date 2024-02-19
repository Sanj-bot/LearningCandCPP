#include<iostream>
using namespace std;


// typedef struct Career
// {
//     int eId;
//     char favChar;
//     float salary;

// }JobLagegi;

union employee{
    int rollNo;
    bool chanceOfJobLoosing;

};

int main()
 {
    employee Dishant;
    Dishant.chanceOfJobLoosing=false;
    Dishant.rollNo=201;
    cout<<Dishant.chanceOfJobLoosing<<endl;
    cout<<Dishant.rollNo<<endl;
//     JobLagegi Sanjay;
//     Sanjay.eId=2201;
//     cout<<Sanjay.eId<<endl;

//     enum Meal{breakfast, lunch, dinner};
//     Meal m1=breakfast;
//     cout<<m1<<endl;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    return 0;
}