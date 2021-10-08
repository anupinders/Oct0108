#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double val=89.36622500;
    //cout.width();
    //cout.fill()
    cout<<setw(20)<<setfill('0')<<setprecision(7)<<setiosflags(ios::scientific)<<val<<endl;//9875.36;
    cout<<setw(20)<<setfill('0')<<setprecision(7)<<setiosflags(ios::right)<<val<<endl;//9875.36;
    return 0;
}