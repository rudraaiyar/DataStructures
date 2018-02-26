#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Time {
    int min;
    int sec;
    int hr;
};

bool getTimeFromUser(Time& t)
{
    string time;
    string hr;
    string min;
    string sec;
    
    getline(cin,time);
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
    t.sec = second;
    t.min = minute;
    t.hr = hour;
    return true;
    
}
void print24Hour(Time& t)
{
    cout << setfill('0') << setw(2) << t.hr << ":" << setfill('0') << setw(2) << t.min << ":" << setfill('0') << setw(2) << t.sec;
}

int main()
{
    
    Time start, end;
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

/*
#include <iostream>
#include <string>

using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;
    
}startStr, endStr;

int getTimeFromUser (Time time)
{
    string startStr;
    string endStr;
    bool startS;
    bool endS;
    
    cout<<"Enter the start time for lecture: ";
    getline(cin,startStr);
    time.hours =atoi(startStr.substr(0,2).c_str());
    time.minutes = atoi(startStr.substr(3,5).c_str());
    time.seconds = atoi(startStr.substr(6,8).c_str());
    
    if (startStr.find(':', 3)&&startStr.find(':', 6))
    {
        if (time.hours >= 0 && time.hours <24 && time.minutes >= 0 && time.minutes< 60&& time.seconds >= 0 && time.seconds< 60)
        {
            startS=true;
            return 1;
        }
    }
    else
    {
        startS=false;
        return 2;
    }
    cout<<"Enter the end time for lecture: ";
    getline(cin,endStr);
    time.hours = atoi(endStr.substr(0,2).c_str());
    time.minutes = atoi(endStr.substr(3,5).c_str());
    time.seconds = atoi(endStr.substr(6,8).c_str());
    
    if (startStr.find(':', 3)&&startStr.find(':', 6))
    {
        if (time.hours >= 0 && time.hours <24 && time.minutes >= 0 && time.minutes< 60&& time.seconds >= 0 && time.seconds< 60)
        {
            endS=true;
            return 3;
        }
    }
    else
    {
        endS=false;
        return 4;
    }
}
void print24Hour(Time time)
{
    if(getTimeFromUser(startStr)== 2)
    {
        cout<< "The start time entered is invalid!"<<endl;

    }
    else if(getTimeFromUser(endStr)== 4)
    {
        cout<< "The end time entered is invalid!"<<endl;
    }
    else
    {
        cout<< "This lecture starts at " <<getTimeFromUser(startStr)<< " and ends at "<< getTimeFromUser(endStr);
    }
}
int main()
{
    getTimeFromUser(startStr);
    print24Hour(startStr);
}
*/