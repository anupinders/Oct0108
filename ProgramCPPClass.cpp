//the preprocessor segment including the required files during the compilatuion
#include<iostream>

//additional namespaces requiured
using namespace std;

//global variable

class ArithmeticOps//abstract data type   ..... CLASS .. OOPS... custom datatype
{

    ///Classes allows us to put a access control mechanim on the data and its operations

    //Data
    private:
        unsigned short int g_firstNo_; //-32768 to +32767
        unsigned short int g_secondNo_; //-32768 to +32767
        //increment the data member varibale
        void plusOne()
        {
            g_firstNo_++;
        }

    public:// access to all the members in this section to be avaialble with the class object using a .(dot) operator
        //function // operations
        unsigned short int g_firstNo()//read/get accessor function for the private data members
        {
            return g_firstNo_;
        } 

        void setg_firstNo(unsigned short int t)//read/get accessor function for the private data members
        {
             g_firstNo_ = t;
        } 

        void getUserValues(){//this function is to be used to take the user input
            cout<<"\nEnter the value";
            cin>>g_firstNo_;
            cout<<"\nSize of the integer variable: "<<sizeof(g_firstNo_);
            cout<<"\n\nValue stored at the variable: "<<g_firstNo_;
        }

        //function which is going to do a repeated printing of the values after individual increments
        void RepeatPrint(){
            for(int i=0;i<10;i++)//iteration for 10 times
            {
                plusOne();
                cout<<"\nValue of the g_firstNo at index "<<i<<" : "<<g_firstNo_;
            }
        }
        
}obj1;


//Main Driving code
int main()
{
    //user instructions for input

    //int objArithmetic; 4 bytes;
    ArithmeticOps objArithmetic, obj2;//variable created for a user defined datatype as the form of class

    cout<<"\nSize of the Object variable: "<<sizeof(objArithmetic);

    //cout<<"Explicityly call the object to set the valuest to its data members:";
    /*cin>>objArithmetic.g_firstNo;
    cout<<"VAlue of the class variable Explicityly set through the object acces:"<<objArithmetic.g_firstNo;*/


    objArithmetic.getUserValues();
    
    objArithmetic.RepeatPrint();

    cout<<"\nThis is the second boject OBJ2 calling:";

    

    obj2.getUserValues();
    obj2.RepeatPrint();

    cout<<"\n\nMemory address of objArithmetic:"<<&objArithmetic;
    cout<<"\n\nData value strored in the g_firstNo of objArithmetic:"<<objArithmetic.g_firstNo();
    cout<<"\n\nMemory address of obj2:"<<&obj2;
    cout<<"\n\nData value strored in the g_firstNo of obj2:"<<obj2.g_firstNo();


    return 0;
}


