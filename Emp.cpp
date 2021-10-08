//emplyee details are going to be maintained
#include<iostream>

using namespace std;

class Employee
{
    //string
    char name[20];
    short int age;

    public:
        void setEmployeeInfo()
        {
            cout<<"enter your name";
            cin.ignore();
            cin.getline(name,20);
            cout<<"enter your age:";
            cin>>age;
        }
        void displayEmployeeInfo();

};

void Employee::displayEmployeeInfo()
{
    cout<<"The Emplyee named "<<name<<" is aged "<<age<<endl;
}
const int listSize = 2;

int main()
{
    Employee empList[listSize];
    cout<<"Lets Set the values for the number of emplyees the start of the program"<<endl;
    for(int empCount =0; empCount<listSize;empCount++)
    {
        empList[empCount].setEmployeeInfo();
    }

    cout<<"\n";

    for(int empCount =0; empCount<listSize;empCount++)
    {
        empList[empCount].displayEmployeeInfo();
    }
 
    return 0;
}