#include <iostream>
using namespace std;
class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code: " << id << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[34];
    //  general store
    //  veggies
    //  harware
    Shop *ptr = new Shop[size]; // shop obj address
    Shop *ptrTemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and Price: " << i + 1 << " ";
        cin >> p >> q;
        //(*ptr).setData(p,q);
        ptr->setData(p, q);
        ptr++;
    }
    for (int j = 0; j < size; j++)
    {
        cout << "Item no: " << j + 1;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}