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
int g_firstNo, g_secondNo; 
int G_firstNo;




//Main Driving code
int main()
{
    //user instructions for input
    cout<<"Hey we want to add the two numbers\n";
    cout<<"Please enter the first number:";
    cin>>g_firstNo;
    cout<<"Please enter the Second number:";
    cin>>g_secondNo;

    //Addtion expression statement, where result shall be integer and both the operand are integers only
    int _result = g_firstNo+g_secondNo;//expression of addition


    ///print result on the console
    cout<<"\n\nThis is the result of addition of both the numbers:"<<result;

    return 0;
}