#include "polygon.h"


//the Polygon interface is supposed to be implemeted in the derived class
// which means that the pure virtual function should be defined with
// there body in side the derived class
class Traingle:public Polygon{
    double sideA;
    double sideB;
    double sidec;

    public:
        void calcArea()
        {
            cout<<"Area of the traingle will be calculated here";
        }
        void calcPerimeter()
        {
            cout<<"Perimeter for the traingle can be caluclated in this function";
        }


};

int main()
{
    Traingle tobj;
    tobj.calcArea();

    Polygon *ptr;
    ptr=&tobj;
    ptr->calcArea();
    
    return 0;
}
