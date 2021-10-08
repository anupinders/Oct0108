#include<iostream>

using namespace std;

//interface class will only contain the pure virtual functions
class Polygon{
    protected:
        double area;
        double perimeter;
        // just give us the basic skeleton about the derived class
        // which should be mandatorly defined as the feature of the 
        // derived class
        
    public:
        virtual void calcArea()=0;
        virtual void calcPerimeter()=0;
        // Polygon(){}
        // ~Polygon(){}
};