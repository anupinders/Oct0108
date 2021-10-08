#include<iostream>
using namespace std;

class parentclass{

    protected:
        int fno;

    public: 
        parentclass()
        {
            cout<<"\nParentClass object is created";
        }
        int sno;

        void setValue()
        {
            cout<<"Enter the values for first no and Second no";
            cin>>fno>>sno;
        }
        int getfno()
        {
            return fno;
        }
        
};

class DerivedClassOne:virtual public parentclass
{
    public:
        DerivedClassOne()
        {
            cout<<"\nDerived Class Object is created";
            //cout<<"\nValue of first no from the derived class: "<<fno<<endl;
            //setValue();
        }
        void printValues()
        {
            cout<<"The value of fno and sno:"<<fno<<","<<sno;
        }
};

class DerivedClassTwo:virtual public parentclass
{
    public:
        DerivedClassTwo()
        {
            cout<<"\nDerived Class Object is created";
            //cout<<"\nValue of first no from the derived class: "<<fno<<endl;
            //setValue();
        }
        void printValues()
        {
            cout<<"The value of fno and sno:"<<fno<<","<<sno;
        }
};

class thirdClass:public DerivedClassOne, public DerivedClassTwo
{
    public:
        thirdClass()
        {
            cout<<"\nThird Class Object is going to be greated now";
            cout<<"\nValue of First No in parent class is: "<<getfno();
        }
};


int main()
{
    //DerivedClass d;
    //d.printValues();
    parentclass p;
    
    thirdClass obj;
    cout<<"\nFno directly printed in the main method:"<<obj.getfno();
    //obj.

    //d.setValue();
    //d.fno=90;
    return 0;
}