#include<iostream>

using namespace std;

class Box
{
    double length, breadth, height;

    public:
        Box(double l, double b, double h)
        {
            length = l;
            breadth=b;
            height=h;
        }//explicit constrotorc

        double Volume()
        {
            return length* breadth* height;
        }

        int Compare(Box boxObj)
        {
            return this->Volume()>boxObj.Volume();//here this is basically a pointer to the object,
            //which is calling the compare funtion from the main
        }

};


int main()
{

    Box b1(4,5,6);
    Box b2(4,5,7);

    if(b1.Compare(b2))
        cout<<"The box B1 is having a larger volume that the B2";
    else
        cout<<"The box B2 is having a larger volume that the B1";

    return 0;
}