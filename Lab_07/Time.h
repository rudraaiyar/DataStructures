#include <iostream>
#ifndef TIME_H //header guard
#define TIME_H
using namespace std;

class Time
{
    private://3 private int
        int hr;
        int min;
        int sec;
    
    public: //every function in time.cpp is here
        Time(int h,  int m,  int s);
        ~Time ();
        int getTimeHr();
        int getTimeMin();
        int getTimeSec();
        void setTimeHr(int h);
        void setTimeMin(int m);
        void setTimeSec(int s);
};
#endif

