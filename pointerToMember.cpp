#include <iostream>
using namespace std;

class test{
    int var;
    public:
    test(int v)
    {
        var=v;
    }

    void printvar()
    {
        cout<<"var:"<<var<<"\n";
    }
};

main()
{
    test t(5);
    cout<<"print using the object\n";
    t.printvar();

    test *tptr;
    tptr = &t;

    cout<<"address of  t object"<<&t<<endl;
    cout<<"val at pounter"<<tptr<<endl;
    cout<<"print using pointer";
    tptr->printvar();

    (*tptr).printvar();


    return 0;
}