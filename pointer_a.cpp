#include <iostream>
using namespace std;

int main()
{
    long long var=5;

    long long* varptr;//=&var;
    
	//varptr=&var;

    cout<<"Value of var:"<<var<<endl;
    cout<<"memory address of var:"<<&var<<endl;
    cout<<"\n";
    cout<<"size of var:"<<sizeof(var)<<" bytes"<<endl;
    cout<<"\n";
    //cout<<"value pointed by  varptr:"<<*varptr<<endl;//this is a problem creating instruction if you are not initializing the ptr
	cout<<"Value of varptr:"<<varptr<<endl;
    cout<<"memory address of varptr:"<<&varptr<<endl;
    
    cout<<"\n";
    cout<<"size of varptr:"<<sizeof(varptr)<<" bytes"<<endl;

	return 0;
}