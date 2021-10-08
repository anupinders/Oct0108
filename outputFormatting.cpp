#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    
    //cout.width(20);// is supposed to be set for each individual outputs followed by this instruction
    //cout.fill('>');//once set is applicable to all the subsequent calls of the cout
    //cout.precision(6);
    //cout.setf(ios::internal,ios::adjustfield);
    //   cout.setf(ios::scientific,ios::floatfield);
    //cout.setf(ios::showpos);// print the sign before the number
    //cout.setf(ios::showbase);// print the base indicator
    /*cout<<val<<endl;
    cout.setf(ios::showpoint);
    cout<<val<<endl;*/
    //cout.width(50);
    //cout<<"Value is: "<<val;
 
    double val=89.36600;
    cout<<setw(10)<<val;
    return 0;
}