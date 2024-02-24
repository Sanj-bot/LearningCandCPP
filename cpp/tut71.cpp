#include <iostream>
#include<vector>
using namespace std;
static int i=0;
template <class T>

void display(vector<T> &v)
{   cout<<"Displaying this vector"<<i+1<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        //cout<<"("<<v.at(i)<<") ";
    }
    cout<<endl;
    i++;
}
int main()
{
    // Ways to create a vector.
    vector<int> vec1;// zero length int vector.
    vector<char> vec2(4);// 4-element char vector.
    vector<char> vec3(vec2);// 4-element char vector from vec2.
    //vector<double> vec4(4);
    //vector<int>  v(6,3); // 6 element vectors of 3s
    //vector<int> v(6,3);
    // display(vec1);
    // display(vec2);
    // display(vec3);
    //display(vec4);
      vector<int> vec4(4,13); // 6 element vector of 3s.
      display(vec4);
      cout<<vec4.size();
      
        
    // display()
    // int element,size=5;
    // cout<<"Enter the size of your vector: "<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector: ";
    //     cin>>element;
    //     vec1.push_back(element);
    
    // }
    // //vec1.pop_back();
    // display(vec1);
    // vector<int>::iterator iter=vec1.begin();
 
    // vec1.insert(iter+1,566);
    // //vec1.insert(iter+1, x, y); // at iter +1 insert x copies of y
    // display(vec1);
    return 0;
}