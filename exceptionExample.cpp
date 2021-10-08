#include<iostream>

using namespace std;

int main()
{

    int n,d;
    cout<<"Enter the valud of numerator and denominator";
    cin>>n>>d;
    
    int result=0;
    
    try{
        if(d!=0)
            result = n/d;
        else
            throw(d);
    }
    catch(int catchValue)
    {
        cout<<"The dnomintor has the value not acceptable by the division operation : "<<catchValue<<endl;
    }

    cout<<"The result of division is going to be: "<< result;

}