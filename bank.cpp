#include<iostream>
#include<string.h>

using namespace std;

class bank
{
    private:
        int acno;
        char nm[50], acctype[7];
        float bal;  
   public:
        bank(int acc_no, const char *name, char *acc_type, float balance)
        {
                acno=acc_no;
                strcpy(nm, name);
                strcpy(acctype, acc_type);
                bal=balance;
        }
        void deposit();
        void withdraw();
        void display();
};

void bank::deposit()   
{
        int amt;
        cout<<"\n Enter Deposit Amount = ";
        cin>>amt;
        bal+=amt;
}

void bank::withdraw()  
{
        int wamt1;
        cout<<"\n Enter Withdraw Amount = ";
        cin>>wamt1;
        if(wamt1>bal)
                cout<<"\n Cannot Withdraw Amount";
        bal-=wamt1;
}

void bank::display()  
{
        cout<<"\n ----------------------";
        cout<<"\n Accout No. : "<<acno;
        cout<<"\n Name : "<<nm;
        cout<<"\n Account Type : "<<acctype;
        cout<<"\n Balance : "<<bal;
        cout<<"\n ----------------------";  
}

int main()
{
        int acc_no;
        char name[50], acc_type[7];
        float balance,bal;
        cout<<"Enter Bank Details\n";
        cout<<"\n Accout No. ";
        cin>>acc_no;
        cout<<"\n Name : ";
        cin.ignore();
        cin.getline(name,50);
        //cin>>name;
        cout<<"\n Account Type : ";
        cin>>acc_type;
        Label:
        cout<<"\n Balance : ";
        cin>>bal;
        if(bal>0){
            balance=bal;
        }else{
            cout<<"Balance cannot be in negative. Type correct balance: ";
            goto Label;//this is not a good approach
        }
  
        bank b(acc_no, name, acc_type, balance);
        int a=1;
        do{
        int ch;
        cout<<"1.Deposit 2.Withdraw 3.Display\n";
        cin>>ch;
        switch(ch){
            case 1:
                 b.deposit(); 
                 break;
            case 2:
                b.withdraw(); 
                break;
            case 3:
                b.display(); 
                break;
            

        }
        cout<<"Want to do more:(1/0)";
        cin>>a;
        }while(a);

       
        return 0;
}