#include<iostream>

using namespace std;

int divide(int n, int d)
{
    int result;
    try{    
        
        if(d!=0)
            result = n/d;
        else
            throw(d);

        
    }
    catch(int catchval)
    {
        cout<<"Exception caught in the functon itself for value of demoninator:"<<catchval<<endl;
        throw;
    }
    return result;
}

double divide(int n, double d)
{
        double result;
        if(d!=0)
            result = n/d;
        else
            throw(d);

        return result;
}


int main()
{

    int n,d;
    double tempd;
    cout<<"Enter the valud of numerator and denominator(int, float)";
    cin>>n>>d>>tempd;
    
    int result=0;
    
    try{
        result = divide(n,d);
    }
    catch(int catchValue)
    {
        cout<<"OUTSIDE:The dnomintor has the value not acceptable by the division operation : "<<catchValue<<endl;
    }
    catch(float catchValue)
    {
        cout<<"The dnomintor has the value not acceptable by the division operation : "<<catchValue<<endl;
    }
    catch(...)
    {
        cout<<"Simple catch without knowing the type of execption"<<endl;
    }
    
    cout<<"The result of division is going to be: "<< result;

}