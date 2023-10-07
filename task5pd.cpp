#include <iostream>
using namespace std;
string projectTimeCalculation( int hours ,int days,int workers);
int main()
{   int hr,no_of_days,no_of_workers;
    cout<<"Enter the needed hours: ";
    cin>>hr;
    cout<<"Enter the days that the firm has: ";
    cin>>no_of_days;
    cout<<"Enter the number of all workers: ";
    cin>>no_of_workers;
    string result=projectTimeCalculation(  hr , no_of_days, no_of_workers);
    cout<<result;
}
string projectTimeCalculation( int hours ,int days,int workers)
{   string result;
    float current_days=days-days*0.1;
    int X=current_days*10;
    int total_hours=workers*X;
    int hours_left=total_hours-hours;
    if (hours_left>=hours)
    {
        return result="Yes! "+to_string(hours_left)+" hours left";
    }
    if (hours_left<hours)
{
    return result ="Not enough time! "+to_string(-hours_left)+" hours needed";
}

}
