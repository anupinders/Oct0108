#include<iostream>
#include<cstring>

using namespace std;

class simpleInterstPlan
{
    char *planName;// explicitly defined the length of the string to be strored in this char array
    int TotalLockTime;

    public:
        simpleInterstPlan()
        {
            planName =  new char[1];
        }
        simpleInterstPlan(char* plan_Name, int period)
        {
            int size = strlen(planName);
            planName = new char[size+1];
            strcpy(planName,plan_Name);
            TotalLockTime = period;
        }

        void printPlanName()
        {
            cout<<"The scheme "<<planName<<" has a lockin period of "<<TotalLockTime<<endl;
        }

};

int main()
{

    char *text = " Tharun Voora ";
    simpleInterstPlan s1(text, 4);

    s1.printPlanName();

    return 0;
}