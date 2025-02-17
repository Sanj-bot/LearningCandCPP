#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title=s;
        rating = r;
    }
      void display() {cout<<"bogus code"<<endl;}
};
class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }

    void display()
    {
        cout << "amazing vid, with title: " << title << endl;
        cout << "Rating: " << rating << "of 5 *" << endl;
        cout << "Lengh of vid: " << videoLength << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, float wc) : CWH(s, r)
    {
        words=wc;
    }
    void display()
    {
        cout << "amazing text, with title: " << title << endl;
        cout << "Rating: " << rating << "of 5 *" << endl;
        cout << " No of words: " << words << endl;
    }
};

int main()
{
    string title;
    float rating,vlen;
    int words;
    title="Django tutorial"; vlen=4.56; rating=4.89;
    CWHVideo djVideo(title, rating, vlen);
    //djVideo.display();

    title="Django text tutorial"; words=433; rating=4.19;
    CWHText djText(title, rating, words);
    //djText.display();
    CWH *tuts[2];
    tuts[0]=&djVideo;
    tuts[1]=&djText;
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}

// rules for virtual functions
/*
    they cannot be static
    they are accessed by object pointers
    virtual functions can be a friend of another class
    A virtual function in base class might not be used.
    if  a virtual funciton is defined in a base class, there is no necessity of redefining it in derived class.
*/