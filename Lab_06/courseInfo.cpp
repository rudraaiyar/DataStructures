#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#import <cstdlib>

using namespace std;

struct Time {
    int min;
    int sec;
    int hr;
};
struct Course
{
    string name;
    int credits;
    bool majorRequirement;
    double avgGrade;
    string days;
    Time startTime;
    Time endTime;
};


bool getTimeFromUser(Time& t)
{
    string time; //collect time
    string hr;   //collect hours
    string min;  //collect minutes
    string sec;  //collect seconds
    
    getline(cin,time); //take in time
    hr = time.substr(0,2); // calls for the substring in the 0th place and digits for the hour slot
    int hour = atoi(hr.c_str()); //function converts string to integer
    min = time.substr(3,2); // calls for the substring in the 3th place and digits for the hour slot
    int minute = atoi(min.c_str());
    sec = time.substr(6,2); // calls for the substring in the 6 th place and digits for the hour slot
    int second = atoi(sec.c_str());
    
    if(hour < 0 || hour > 24) // checks for a valid input for hour
        return false;
    if(minute < 0 || minute > 60) // checks for a valid input for min
        return false;
    if(second < 0 || second > 60) // checks for a valid input for sec
        return false;
    
    t.sec = second;
    t.min = minute;
    t.hr = hour;
    
    return true;
    
}

void print24Hour(Time& t)
{
    if(t.hr < 12) //if hour is less then 12, then keep it
    {
        cout << setfill('0') << setw(2) << t.hr << ":";
        cout << setfill('0') << setw(2) << t.min << ":";
        cout << setfill('0') <<	setw(2) << t.sec << "am";
    }
    else  //if hour is more then 12, then change it
    {
        t.hr = t.hr - 12; //ex. 17-12 =5th hour
        cout << setfill('0') << setw(2) << t.hr << ":";
        cout << setfill('0') << setw(2) << t.min << ":";
        cout << setfill('0') << setw(2) << t.sec << "pm";
    }
}


int main()
{
    Time start,end; //struct types
    Course schedule; //course types
    int course;
    string line;
    int size;
    string s[3]; //start array for time
    string e[3]; //end array for time
    
    ifstream fin; //file declaration
    fin.open("in.txt"); //file
    getline(fin,line);
    course = atoi(line.c_str()); //convert to int
    size = course * 7; //set size
    string *arr = new string[size]; //declare pointer array
    
    for(int i = 0; i < size; i++) //store text file into array
    {
        getline(fin,line);
        arr[i] = line;
        cout<<arr[i]<<endl;
    }
    fin.close();
    
    cout << "-------------------" << endl;
    cout << "SCHEDULE OF STUDENT" << endl;
    cout << "-------------------" << endl;
    
    string begin;
    string finish;
    int i = 0;
    
    //printing and assignments
    for(int j = 0; j < course; j++)
    {
        
        cout << "COURSE " << j+1 << ": ";
        schedule.name = arr[i];
        schedule.credits = atoi(arr[i+1].c_str());
        schedule.majorRequirement = atoi(arr[i+2].c_str());
        schedule.avgGrade = atof(arr[i+3].c_str());
        schedule.days = arr[i+4];
        
        cout<< schedule.name <<endl;
        
        
        if(schedule.majorRequirement ==1)
            cout << "Note: this course is a major requirement"  << endl;
        else
            cout << "Note: this course is not a major requirement" << endl;
        
        cout << "Number of credits:" << schedule.credits << endl;
        cout << "Days of lectures:" << schedule.days << endl;
        
        
        begin = arr[i+5]; //takes string with regards to time and converts them to the integer values inputed
        s[0] = begin.substr(0,2);
        s[1] = begin.substr(3,2);
        s[2] = begin.substr(6,2);
        cout << "Lecture time: ";
        start.hr = atoi(s[0].c_str());
        start.min = atoi(s[1].c_str());
        start.sec = atoi(s[2].c_str());
        print24Hour(start);
        
        cout << " - ";
        //End of Lecture Timing values
        finish = arr[i+6];
        e[0] = finish.substr(0,2);
        e[1] = finish.substr(3,2);
        e[2] = finish.substr(6,2);
        end.hr = atoi(e[0].c_str());
        end.min = atoi(e[1].c_str());
        end.sec = atoi(e[2].c_str());
        print24Hour(end);
        cout<<""<<endl;
        i = i + 7;
        cout << "Stat: on average students get " << schedule.avgGrade;
        cout << "% in this course."<< endl;
        cout << "-------------------" << endl;
        
    }
    return 0;
}
