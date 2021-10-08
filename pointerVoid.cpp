#include <iostream>
using namespace std;

int main()
{
    int foo[5]={16,2,77,40,12071};

    for(int count=0;count<5;count++)
    {
        cout<<"Value on foo array Index:"<<count<<" ->"<<foo[count]<<endl;
    }

    cout<<"Address of the array foo:"<<&foo<<endl;
    cout<<"value of foo:"<<foo<<endl;//maintains the base address for the list in memory
    cout<<"dereferce the of foo variable:"<<*(foo+0)<<endl;//foo[0]
    cout<<"value of foo+1:"<<foo+1<<endl;
    cout<<"dereferce the of foo variable:"<<*(foo+1)<<endl;//foo[1]
    cout<<"value of foo+2:"<<foo+2<<endl;
    cout<<"dereferce the of foo variable:"<<*(foo+2)<<endl;//foo[2]
	return 0;
}