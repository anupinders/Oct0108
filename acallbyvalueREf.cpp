#include <iostream>
using namespace std;

int add(int, int);//call by value
void add(int *, int *);// call by refer
void addref(int &, int &);

int main()
{
    int fno=5;
    int sno=10;

    cout<<"memory address of fno:"<<&fno<<endl;
    cout<<"memory address of sno:"<<&sno<<endl;

    int result=add(fno,sno);

    cout<<"Value of fno after the simple add function:"<<fno<<endl;
    cout<<"Value of sno after the simple add function:"<<sno<<endl;

    add(&fno,&sno);
    
    cout<<"Value of fno after the Reference pointer add function:"<<fno<<endl;
    cout<<"Value of sno after the Reference pointer add function:"<<sno<<endl;

    addref(fno,sno);
    cout<<"Value of fno after the Reference pointer add function:"<<fno<<endl;
    cout<<"Value of sno after the Reference pointer add function:"<<sno<<endl;
    return 0;
}

int add(int a, int b)
{
    return a+b;
}

void add(int *f, int *s)
{
    *f+=*s;//*f= *f+*s
}

// reference variable
void addref(int &f, int &s)
{
    f+=s;//*f= *f+*s
}
