#include <iostream>
using namespace std;

class Point{
    int x,y;
    public:
        Point(int a, int b)
        {
            x=a;
            y=b;

        }
        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }
};
// create a fun which takes 2 point obj args and computes dist.
int main()
{
    Point p(1,1);
    p.displayPoint();
    Point q(4,6);
    q.displayPoint();
    return 0;
}