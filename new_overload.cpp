#include<iostream>

using namespace std;

class student
{
    int var1;
    int var2;

    public:
        student()
        {
            var1=0;
            var2 =0;
        }

        student(int v1, int v2)
        {
            var1=v1;
            var2 =v2;
        }

        int getVar1()
        {
            return var1;
        }

        int getVar2()
        {
            return var2;
        }
        void print()
        {
            cout<<"VAlues from Student object VAr1:"<<var1<<", VAr2: "<<var2<<endl;
        }
};

class Human
{
    double var1;
    float var2;

    public:
        Human()
        {
            var1=0;
            var2 =0;
        }

        Human(double v1, float v2)
        {
            var1=v1;
            var2 =v2;
        }
        
        Human(student s)
        {
            var1= double(s.getVar1());
            var2= float(s.getVar2());
        }

        void print()
        {
            cout<<"VAlues from Human object VAr1:"<<var1<<", VAr2: "<<var2<<endl;
        }
};



int main()
{

    int var = 45;

    double tvalue = double(var);
    
    student studObj(2,3);
    Human hObj(25.8,26.3);

    Human ObjCreatedFromStudent(studObj);//typecasting of the one type of object to another type

    Human *ObjStudPtr =  new Human(studObj);//typecasting of the one type of object to another type

    studObj.print();
    hObj.print();
    ObjCreatedFromStudent.print();

    ObjStudPtr->print();

   return 0;
}