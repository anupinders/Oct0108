#include<iostream>

using namespace std;

class timekeeper{
    //hour, minutes,second
    //hours, minutes
    int hours, minute;

    public:
        void setValues()
        {
            cout<<"Enter the hours";
            cin>>hours;
            cout<<"enter the minutes";
            cin>>minute;
        }

        void displayValues()
        {
            cout<<"The emplyee worked for "<<hours<<" hours and "<<minute<<" minutes"<<endl;
        }

        void TotalHours(timekeeper t1, timekeeper t2)//member function which is going to work with 
        // its private members with implicit access
        {
            minute = t1.minute + t2.minute;
            hours = minute/60;
            minute = minute%60;
            hours = hours + t1.hours+ t2.hours;
        }

        timekeeper operator+(const timekeeper & t2)
        {
            timekeeper total;
            total.minute = this->minute + t2.minute;
            total.hours = total.minute/60;
            total.minute = total.minute%60;
            total.hours = total.hours + this->hours+ t2.hours;
            return total;
        }

        friend timekeeper caluclateTotalTime(timekeeper t1, timekeeper t2);
};

//friend functon where the private variables can be acced with the object dot membership operator
// through the procedure for making the function friend tjo the class
// and the explicit object is returened for further ooperations to be called for the 
//calculatio performed
timekeeper caluclateTotalTime(timekeeper t1, timekeeper t2)
{
    timekeeper newTotalTime;
    newTotalTime.minute = t1.minute + t2.minute;
    newTotalTime.hours = newTotalTime.minute/60;
    newTotalTime.minute = newTotalTime.minute%60;
    newTotalTime.hours = newTotalTime.hours + t1.hours+ t2.hours;
    return newTotalTime;
}


int main()
{

    timekeeper d1,d2,totaltime;

    d1.setValues();
    d2.setValues();

    totaltime.TotalHours(d1, d2);//member function call

    cout<<"total Time spent by an emplyee on the designated days:"<<endl;

    timekeeper toperator = d1+d2;/// operator overlaoding function call for + operator
    cout<<"total Time spent calcualte through the operator Overload:"<<endl;

    /*totaltime.displayValues();

    cout<<"Call the friend Fuction for tieme calculation:"<<endl;
    timekeeper tfriend = caluclateTotalTime(d1,d2);
    tfriend.displayValues();*/

    return 0;
}