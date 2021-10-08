#include <iostream>
using namespace std;
template<class A>
A multi(A fno, A sno)
{
    A result;
    result = fno* sno;
    return result;
}

template<class A, int t>
A multiFixed(A fno, A sno)
{
    A result;
    result = fno* sno * t;
    return result;
}

int main()
{
    float first = 11.36;
    float second = 90.64;
    //int valueT=35;

    cout<<multi<double>(double(first),double(second))<<endl;
    cout<<multi<float>(first,second)<<endl;
    cout<<multi<double>(25.2,63.1)<<endl;
    cout<<multiFixed<double,25>(25.2,63.1)<<endl;

    return 0;
}