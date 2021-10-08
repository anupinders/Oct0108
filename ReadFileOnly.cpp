#include<iostream>
#include<fstream>

using namespace std;

int main()
{

    int rollNo;
    char name[30];
    int count=1;

    fstream studInfo;//open file for writing ,, it will overwrite the existing file
    studInfo.open("studentInfo.txt",ios::in);/// open the file for writing only

    char info[60];
	
    studInfo.seekg(30,ios::beg);
    while(studInfo)
    {
        studInfo.getline(info,60);//read the info from the file
        cout<<info<<" and the current pointer for reading is: "<<studInfo.tellp()<<endl;// put the info on the console
        //2
    }


    studInfo.close();

	return 0;
}