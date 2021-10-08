#include<iostream>

using namespace std;

class objectCount{

    
    int someValue;

    public:
    static int staticCount;
        objectCount()
        {
            cout<<"Contructor is called and a new object is created!"<<endl;
            staticCount++;
        }
        ~objectCount()
        {
            cout<<"destructor is called and an object is destroyed!"<<endl;
            staticCount--;
        }

        void printObjectCount()
        {
            cout<<"Total No of object Created till now are:"<<staticCount<<endl;
        }

        static void DisplayObjectCout()
        {
            cout<<"Current Count of objects are:"<<staticCount<<endl;
        }
        

};

int objectCount::staticCount;// initialization of the static variable

int main()
{
    objectCount obj1;
    obj1.printObjectCount();
    {
        objectCount obj2;
        obj2.printObjectCount();
    }
    obj1.printObjectCount();

    objectCount obj3;
    obj3.printObjectCount();

    objectCount obj4;
    obj4.printObjectCount();
    {
        objectCount obj5;
        obj5.printObjectCount();
    }

    obj1.printObjectCount();
    objectCount obj6;
    obj6.printObjectCount();

    objectCount obj7;
    obj7.printObjectCount();


    cout<<"Finally we have the :  >> ";

    objectCount::DisplayObjectCout();//static fuctions are called ... and are used in the case where we
    //directly want to access the static memebers for explicit display of static variable count.


    cout<<"\n\nThe object count from the variable itself :::>>>>> "<<objectCount::staticCount<<endl;

    return 0;
}