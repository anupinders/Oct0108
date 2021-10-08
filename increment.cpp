#include<iostream>

using namespace std;

class num
{
    int x;
    public:
        num()
        {
            x=0;
        }

        void operator++()
        {
            x=x+1;
        }

        void operator++(int a)
        {
            x=x+1;
        }
        void print()
        {
            cout<<"\nValue of X:"<<x;
        }
};

int main()
{
    num n;
    n.print();
    ++n;
    n.print();
    n++;
    n.print();

   return 0;
}