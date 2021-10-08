#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    int studMarks[6]={34,54,65,34,43,65};

    ofstream studInfo("stud.txt");
    int record=6;
    while(record>0)
    {
        studMarks[record-1]=record;
        studInfo.write((char *) & studMarks,sizeof(studMarks));
        record--;
    }

    studInfo.close();

    ifstream studRead("stud.txt");

    int studReadInfo[6] = {0,0,0,0,0,0};

    while(studRead){
        studRead.read((char *) & studReadInfo,sizeof(studReadInfo));
        int count=0;
        while(count<6)
        {
            cout<<"\nThe  value  at index "<<count<<" is :"<<studReadInfo[count];
            count++;
        }
        cout<<"\n\n";
    }
    studRead.close();
    return 0;
}