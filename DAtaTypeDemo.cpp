/*
    Objective: To do the addition of the two numbers that are entered by the user

    Author: Anupinder singh
    Created On: October 01, 2021
    Modified On:
    Dependencies:

*/


//the preprocessor segment including the required files during the compilatuion
#include<iostream>

//additional namespaces requiured
using namespace std;

//global data to be accessed througout the program, use them cautiously
//Both the variable are on integer type, expected to have 4 bytes/2 bytes 





//Main Driving code
int main()
{
    //user instructions for input
    unsigned short int g_firstNo; //-32768 to +32767

    cout<<"Enter the value";
    cin>>g_firstNo;
    cout<<"\nSize of the integer variable: "<<sizeof(g_firstNo);
    cout<<"\n\nValue stored at the variable: "<<g_firstNo;

    for(int i=0;i<10;i++)//iteration for 10 times
    {
        g_firstNo++;
        cout<<"\nValue of the g_firstNo at index "<<i<<" : "<<g_firstNo;
    }
   
    return 0;
}