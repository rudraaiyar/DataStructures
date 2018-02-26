#include <iostream>
#include "Time.h"
using namespace std;

    
    Time :: Time(int h,  int m,  int s)
    {
        hr = h;
        min = m;
        sec = s;
    }
    Time :: ~Time (){};
    int Time :: getTimeHr() //get hr
    {
        return hr;
    }
    int Time :: getTimeMin() //get min
    {
        return min;
    }
    int Time :: getTimeSec() //get sec
    {
        return sec;
    }
    void Time :: setTimeHr(int h) //set hr
    {
        hr = h;
    }
    void Time :: setTimeMin(int m) //set min
    {
        min = m;
    }
    void Time :: setTimeSec(int s)//set sec
    {
        sec = s;
    }

