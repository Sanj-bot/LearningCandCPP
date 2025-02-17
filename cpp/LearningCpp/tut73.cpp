#include <iostream>
#include<map>
#include<string>
using namespace std;



int main()
{
    map<string, int> marksMap;
    marksMap["Harry"]=98;
    marksMap["Jack"]=59;
    marksMap["Rohan"]=2;
    marksMap.insert({{"Kozume", 121},{"Kuroo",187}});
    map<string, int>:: iterator iter;
    for(iter=marksMap.begin(); iter!=marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<endl;
    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max Size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is: "<<marksMap.empty()<<endl;
    return 0;
}