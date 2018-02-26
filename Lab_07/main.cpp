#include <iostream>
#include <string>
#include <iomanip>
#include "Time.h"
#include "Time.cpp"

using namespace std;

bool getTimeFromUser(Time& t)
{
    string time;
    string hr;
    string min;
    string sec;
    
    getline(cin,time); //reads line
    hr = time.substr(0,2); // calls for the substring in the 0th place and 2 digits for the hour slot
    int hour = atoi(hr.c_str()); //function converts string to integer
    min = time.substr(3,2);
    int minute = atoi(min.c_str());
    sec = time.substr(6,2);
    int second = atoi(sec.c_str());
    if(hour < 0 || hour > 24) // checks for a valid input for hour
        return false;
    if(minute < 0 || minute > 60)
        return false;
    if(second < 0 || second > 60)
        return false;
    t.setTimeHr(hour);    //calls set time hr function
    t.setTimeMin(minute); //calls set time min function
    t.setTimeSec(second); //calls set time sec function
    return true;
    
}
void print24Hour(Time& t)
{
    cout << setfill('0') << setw(2) << t.getTimeHr() << ":" << setfill('0') << setw(2) << t.getTimeMin() << ":" << setfill('0') << setw(2) << t.getTimeSec(); // prrints using get time function
}

int main()
{
    
    Time start(0,0,0), end(0,0,0);
    cout << "Enter the start time for the lecture (format is HH:MM:SS): ";
    bool t1 = getTimeFromUser(start); // reads and then calls function boolean expression to be inputed into the 24 hr format
    if (t1 == false) // condition for
    {
        cout<< "The start time entered is invalid!"<<endl;
        return 0;
    }
    cout << "Enter the end time for the lecture (format is HH:MM:SS): ";
    bool t2 = getTimeFromUser(end);
    if (t2 == false)
    {
        cout << "The end time entered is invalid!"<<endl;
        return 0;
    }
    if (t1 & t2)
    {
        cout << "The lecture starts at ";
        print24Hour(start);
        cout << " and ends at ";
        print24Hour(end);
        cout<<""<<endl;
    }
    return 0;
}
