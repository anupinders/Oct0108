// constant variables and the constant literals

#include<iostream>
#define pi 3.14159


using namespace std;

int add(int,int);// function prototype is basically a signature defination of a function which will be declared in the later part of the programs
int sub(int,int);
int divide(int,int);
int mul(int,int);
int mod(int,int);

int main()
{
    int first, second;

    int option;
    while(option)
    {
        cout<<"Enter the numbers for check";
        cin>>first>>second;

        cout<<"Tell Me which operation do you want me to perform, Choose the operation from the below provided list"<<endl;
        cout<<"\n1. Addition";
        cout<<"\n2. Substraction";
        cout<<"\n3. Division";
        cout<<"\n4. Multiplication";
        cout<<"\n5. Modulus";
        cin>>option;

        int result;
        switch(option)
        {
            case 1://addition
                cout<<"Addition is to be performed"<<endl;
                result= add(first,second);
                break;
            case 2:// sub
                cout<<"Subtraction is to be performed"<<endl;
                result= sub(first,second);
                break;
            case 3://divisin
                cout<<"division is to be performed"<<endl;
                
                result= divide(first,second);
                break;
            case 4://Multi
                cout<<"multiplication is to be performed"<<endl;
                result= mul(first,second);
                break;
            case 5://mod
                cout<<"Modulus is to be performed"<<endl;
                result= mod(first,second);
                break;
            default:
                cout<<"Sorry I did not understand the option entered, Pleasde try again";
        }
        cout<<"\nThe RESULT of the operation performed is:::>>> "<<result;

        cout<<"\nDo you want more operations to be performed?(1=Yes, 0= No)";
        cin>>option;
    }
    return 0;
}

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int divide(int a,int b)
{
    return a/b;
}
int mul(int a,int b)
{
    return a*b;
}
int mod(int a,int b){
    return a%b;
}