#include<iostream>
using namespace std;

class Calculator{

    int fno;
    int sno;

    public:
        Calculator()//default the contructor should also be defined when an explicit constructor definition
        // is to be used 
        {
            cout<<"Default Construtor called"<<endl;
            fno=0;
            sno=0;
        }
        
        Calculator(int f, int s)//explicit constructor call 
        {
            cout<<"Explicit Construtor called"<<endl;
            fno=f;
            sno=s;
        }

        //
        void setValues()
        {
            fno=0;
            sno=0;
        }
        void printvalues()
        {
            cout<<"values of the member variables fno:"<<fno<<", sno:"<<sno<<endl;
        }
}calc;


//driver code
int main()
{
    Calculator calc;//default constructor
    Calculator calc1(2,3);

    //calc.setDefaultValues();
    calc.printvalues();
    //calc.setDefaultValues(2,4);
    calc1.printvalues();

    return 0;
}