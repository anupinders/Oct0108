#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int len=30;
    char name[30];//'\0'

    cout<<"Enter you full name";
    cin>>name;
    cout<<"The information catured through the input stream is: "<<name<<endl;

    cout<<"Enter you full name second time";
    cin.getline(name,len);
    cout<<"The information catured through the input stream is: "<<name<<endl;

    cout<<"Enter you full name third time";
    cin.getline(name,len);
    cout.write(name, 15);
    //cout<<"The information catured through the input stream is: "<<name<<endl;


    return 0;
}