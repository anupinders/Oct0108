#include "polygon.h"


class rectangle:public Polygon{//abstract class
    public:
        void calcArea(){// one function defintion is provided
            cout<<"Inside calc Area of rectangle class";
        }

        virtual void calcPerimeter()=0;// this is keep as pure virtual fuction

};

class redRectangle:public rectangle{

    public:
        void calcPerimeter()
        {
            cout<<"Inside the calcparimeter defined with redREctangle class";
        }
};

class square:public Polygon{

};

int main()
{
    // Polygon p;
    // rectangle r;
    redRectangle r;
    r.calcArea();
    r.calcPerimeter();
    return 0;
}