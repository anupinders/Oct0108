#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int var,var1;
    string s;
    cout<<"Enter the var value";
    cin>>var;//>>var1>>s;
    cout<<"Data read from the stream:"<<var<<endl;//<<" and "<<var1<<" and "<<s;

    cout<<"Now we are going to read the pending input stream infromation"<<endl;

    char c;
    //cin.get(c);// first character is read from there
    c= cin.get();

    while(c!='\n')
    {
        //cout<<c;
        //cin.get(c);
        cout.put(c);// put the info on out stream character by character
        c= cin.get();
    }

    return 0;
}