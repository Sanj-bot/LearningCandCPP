#include <iostream>
#include<list>
using namespace std;

    void display(list<int> &lst)
    {
        list<int>:: iterator it;
        for (it  = lst.begin(); it != lst.end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;    
    }

int main()
{
    // 6,8,9
    list<int> list1;
    //list<int> list2(7);
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);
    

    // removing elements from the list
    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);
    // list1.remove(9);
    // display(list1);
    list1.sort();
    display(list1);
    list<int> list2(3); // empty list of size 3
    list<int> :: iterator iter;
    iter =list2.begin();
    *iter=45;
    iter++;
    *iter=6;
    iter++;
    *iter=9;
    iter++;
    display(list2);
    list1.merge(list2);
    cout<<"List 1 after merging: "<<endl;
    
    
    display(list1);
    list2.sort();

    display(list2);
    list1.reverse();
    display(list1);
    // for(int i=0;i<5;i++)
    // {
    //     cout<<*iter<<" ";
    //     iter++;
    // }

    // cout<<endl;
    // iter--;
    // for(int j=0;j<5;j++)
    // {
    //     cout<<*iter<<" ";
    //     iter--;
    // }   
    
    return 0;
}