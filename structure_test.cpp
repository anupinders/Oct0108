#include <iostream>
using namespace std;

struct product
{
    int weight;
    int prices;

    void setValues(int w, int p)
    {
        weight=w;
        prices=p;
    }

    void printProduct()
    {
        cout<<"The weight is:" <<weight<<" and price is:"<<prices;
    }

};

int main()
{
    product TV;

    TV.setValues(2,10000);
    TV.printProduct();
}