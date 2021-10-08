#include<iostream>
using namespace std;

class Student
{
    protected:
        int roll_no;
    
    public:
        //Student(){}
        Student(int roll)
        {
            roll_no = roll;
        }

        void setRollNo(int roll)
        {
            roll_no = roll;
        }
        int getRollNo()
        {   
            return roll_no;
        }
};

class unittest: public Student
{
    protected:
        int english;
        int maths;
    
    public:
        unittest(int rollNo, int eng, int math):Student(rollNo)
        {
            english=eng;
            maths=math;
        }
        void setSubjectMark(int e, int m)
        {
            english=e;
            maths=m;
        }

        void printMarks()
        {
            cout<<"The marks in English : "<<english<<" and maths: "<<maths<<endl;
        }
};

/*class sports:virtual public Student
{
    protected:
        int hockeyPerformance;
    public:
        void setSportsPerformance(int Marks)
        {
            hockeyPerformance=Marks;
        }
        int getSportsPerformance()
        {
            return hockeyPerformance;
        }
};*/


class sports
{
    protected:
        int hockeyPerformance;
    public:
        sports(int Marks)
        {
            hockeyPerformance=Marks;
        }
        int getSportsPerformance()
        {
            return hockeyPerformance;
        }
};

class FinalResult:public unittest, public sports
{
    int TotalMarks;
    public:
        FinalResult(int rollno, int eng, int math, int sportMarks): unittest(rollno, eng,math), sports(sportMarks)
        {
            cout<<"\nFinally all the base class constructors are called!"<<endl;
        }

        void CalculateAndDisplay()
        {
            TotalMarks = english+maths+hockeyPerformance;
            cout<<"The percentage of the student roll no:"<<getRollNo()<<" : "<<(double(TotalMarks)/300)*100<<"%";
        }
};



int main()
{
    FinalResult f(567,25,36,75);
    
    //int rollno;
    
    /*cout<<"Enter the student Roll No:";
    cin>>rollno;
    f.setRollNo(rollno);*/
    
    /*int e,m;
    cout<<"Share the marks of English & Maths";
    cin>>e>>m;
    f.setSubjectMark(e,m);*/
    
    /*int h;
    cout<<"Share the marks of Hockey performance";
    cin>>h;
    f.setSportsPerformance(h);*/

    f.printMarks();
    
    f.CalculateAndDisplay();

    return 0;
}