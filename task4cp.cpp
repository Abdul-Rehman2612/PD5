#include<iostream>
using namespace std;
void projectTimeCalculation(int hoursneeded, int days,int workers);
main()
{
    int hoursneeded,days,workers;
    cout << "Enter the needed needed hours: " ;
    cin >> hoursneeded;
    cout << "Enter the days that the firm has: " ;
    cin >> days;
    cout << "Enter the number of all workers: " ;
    cin >> workers;
    projectTimeCalculation(hoursneeded, days, workers);
}
void projectTimeCalculation(int hoursneeded, int days,int workers)
{   
    int hours;
    int workinghoursincovertime=9;
    int workingtimeinalldays=days*workinghoursincovertime*workers;
    if(hoursneeded>workingtimeinalldays)
    {
       hours=hoursneeded-workingtimeinalldays;
       cout << "Note enough time! " <<  hours << " hours needed." ;
    }
    if(hoursneeded<workingtimeinalldays)
    {
        hours=workingtimeinalldays-hoursneeded;
        cout << "Yes!" << hours << " hours left.";
    }

}