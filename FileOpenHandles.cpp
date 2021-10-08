#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    int rollNo;
    char name[30];
    int count=1;

    cout<<"Hey let us know the count of the student"<<endl;
    cin>>count;

    fstream studInfo;//open file for writing ,, it will overwrite the existing file
    studInfo.open("studentInfo.txt",ios::app | ios::in);/// open the file for writing only

    /*studInfo<<"Roll No";
    studInfo<<"               ";
    studInfo<<"Name\n";
    */

   
    while(count>0)
    {
        cout<<"Enter Roll No:";
        cin>>rollNo;
        cout<<"Great!!... Let us know his/her Name:";
        cin.ignore();
        cin.getline(name, 30);

        studInfo<<rollNo;
        studInfo<<"               ";;
        studInfo<<name;
        studInfo<<"\n";

        count--;
    }
    
	//studInfo.close();
	
	
    //studInfo.open("studentInfo.txt",ios::in); /// open the file for reading only
    studInfo.seekg(0,ios::beg);
	char info[60];
	
    while(studInfo)
    {
        studInfo.getline(info,60);//read the info from the file
        cout<<info<<endl;// put the info on the console
    }

	studInfo.close();
	
	return 0;
}