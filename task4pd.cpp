#include <iostream>
using namespace std;
string projectTimecalculation(int hours,int days,int workers);
int main()
{  int hr,days_given,total_workers;
    cout<<"Enter the needed hours:";
    cin>>hr;
    cout<<"Enter the days that the firm has:";
    cin>>days_given;
    cout<<"Enter the number of all workers:";
    cin>>total_workers;
    string result=projectTimecalculation(hr,days_given,total_workers);
    cout<<result;
}
string projectTimecalculation (int hours,int days,int workers)
{
string result;
float X=days-(days*0.1);
cout<<X<<endl;
int new_days_hours=X*10;
cout<<new_days_hours<<endl;
int total_hours=new_days_hours*workers;
cout<<total_hours<<endl;
int Y=total_hours-hours;
cout<<Y<<endl;
if (total_hours>hours)
{
    result="Yes!"+to_string(Y)+" hours left.";
}
if (total_hours<hours)
{
    result="Not enough time! "+to_string(-Y)+" hours needed.";
}
return result;

}
