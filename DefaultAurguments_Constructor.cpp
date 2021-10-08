#include<iostream>

using namespace std;

class simpleInterst
{
    int principle;
    float interest;
    int year;

    public:
        simpleInterst() { 
            principle=0;
            interest=0;
            year=0;

         }
        simpleInterst(int p, int y, int r=7)
        {   
            principle=p;
            interest=r;
            year=y;
        }
        //copy constructor call where we are explictly calling the copy of one object to the other
        simpleInterst(simpleInterst & obj)
        {
            principle = obj.principle * 2;
            year = obj.year;
            interest = obj.interest;
        }

        float calcInterest()
        {

            return float(principle) * year * float(interest/100);
        }
};

int main()
{

    simpleInterst sDefault;
    cout<<"The default call to simple interest object is: "<< sDefault.calcInterest()<<endl;
    sDefault = simpleInterst(10000,2,10);//dynamic initalization or allocation to the object multiple constuctor call
    cout<<"The default call to simple interest object is changed to the parametrised one: "<< sDefault.calcInterest()<<endl;

    simpleInterst copyObj=sDefault;// to use the copy constuctor we shall initialize the new object immedialy within the declaration statement
    
    cout<<"Value calculated with explicit interest rate by copy object:"<<copyObj.calcInterest()<<endl;

    simpleInterst copyObj1;
    copyObj1 = sDefault;//this statement is not going to call copy constructor instead it will directly create a copy of existing object and then assigne to the new object itself
    cout<<"Value calculated with explicit interest rate by copy object:"<<copyObj1.calcInterest()<<endl;


    simpleInterst s(12000,3, 8);// interest rate is being provided as the parameter
    simpleInterst s1(12000,3);// first two arguments are explicily passed toe the constructor call
    // and the third argument will take the default value.

    cout<<"Value calculated with explicit interest rate"<<s.calcInterest()<<endl;
    cout<<"Value calculated with default interest rate@7%"<<s1.calcInterest()<<endl;

    return 0;
}