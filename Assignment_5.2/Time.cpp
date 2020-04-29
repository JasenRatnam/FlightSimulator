/*
 * Class taken from lecture slides given by instructor of Coen 243.
 */
#include "Time.h"
#include "Date.h"
#include "flight.h"

using namespace std;

// Time constructor initializes each data member to zero 
// ensures all time objects start in a consistent state.

Time::Time() 
{
    hour = 0;
    minute = 0;
    second = 0;
} // end Time constructor

// set new Time value using universal time, perform validity
// checks on the data values and set invalid values to zero
void Time::setTime(int h, int m, int s)
{
    hour = (h >=0 && h < 24) ? h : 0;
    minute = (m >= 0 & m < 60) ? m : 0;
    second = (s >= 0 & s < 60) ? s : 0;
} // end function setTime

// print Time in universal format
void Time::printUniversal() 
{
    cout << setfill('0') << setw(2) << hour << ":"
         << setw(2) << minute << ":"
         << setw(2) << second;
} // end function printUniversal

// print Time in standard format
void Time::printStandard()
{
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12)
    << ":" << setfill('0') << setw(2) << minute
    << ":" << setw(2) << second
    << (hour < 12 ? " AM" : " PM");
}// end function printStandard
