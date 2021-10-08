#include<iostream>
using namespace std;

int main()
{
    int x=5;/// you can make only this variable as constant
    int *ptr =&x;// you can make this pointer variable as constant
    cout<<"Address at ptr"<<ptr<<endl;
    //both of these variable as constants

    //x=6;//change will be allowed at this instruction

    //const int *ptr1=&x;// pointer to constant
    //int * const ptr1=&x;//  constant pointer
    const int * const ptr1=&x;//  constant pointer
    int y=6;

    cout<<"Address at ptr1"<<ptr1<<endl;
    cout<<"value poited by ptr1"<<*ptr1<<endl;
    *ptr1=8;
    cout<<"value poited by ptr1 after the change"<<*ptr1<<endl;
    //after this the reference to the ptr1 is going to changee
    ptr1=&y;
    cout<<"Address at ptr1 after modifiaction with y address"<<ptr1<<endl;


    return 0;

}