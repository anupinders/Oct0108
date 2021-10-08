#include<iostream>
#include<string>

using namespace std;

int main()
{
    
    string firstname("Anupinder");
    string secondname("singh");
    string name("AnupindeR");

    //string fullName = ((firstname + " ") + secondname);
    string fullName = "*"; 
    fullName += firstname + " ";
    fullName += secondname;
    fullName +="*";

    cout<<firstname<<endl;
    cout<<secondname<<endl;
    cout<<fullName<<endl;

    
    string s1;
    string s2(" Tharun");
    string s3(" voora");

    s1=s2;//" Tharun"
    // cout<<"Value is s1: "<<s1;

    s1="This is just a context change we are doing on already initialized string";

    // cout<<"Value is s1: "<<s1;

    string sCopy;
    cout<<"Status of data in sCopy:"<<((sCopy.empty())?("True"):("False"))<<endl;

    if (!sCopy.empty())
    {
        cout<<"Length of string: "<<sCopy.length()<<endl;
        cout<<"Size of string: "<<sCopy.size()<<endl;
        cout<<"Campacity of string: "<<sCopy.capacity()<<endl;
        cout<<"max size of string: "<<sCopy.max_size()<<endl;
    }

    // cout<<"\n\nValue is scopy: "<<sCopy;

    //s1.replace(1,4,s2);

    //assignmement for oct 08 for checking all  the relational operations
    /*if(firstname.compare(name) )
    {
        cout<<"The name matched with the fullnmae";
    }
    else
    {
        cout<<"The name did not matched with the fullnmae";
    }*/

    //int place = s1.find("Just");

    cout<<"Lets check what place is going to share with us::"<<s1.at(5)<<endl;

    for(int count=0;count<s1.length();count++)
    {
        cout<<"\n The character at index "<<count<<" is :"<<s1.at(count);
    }


    if(s1.find("Just"))// search on the basis of context
    {
        cout<<"The string was found in the search";
    }
    else
    {
        cout<<"The string was not found in the search";
    }


    int jplace = (int)s1.find_first_of('j');

    cout<<"The first instance of the \'j\' is found at "<<jplace;
    
    cout<<"The substring of S1 is: "<<s1.substr(0,40);
    


    return 0;
}