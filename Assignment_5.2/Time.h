/*
 * Class specification taken from lecture slides given by instructor of Coen 243.
 */
#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <iomanip>
#include "Date.h"
#include "Time.h"

using namespace std;

// Time abstract data type (ADT) definition
class Time {
public:
    Time();                      // constructor.
    void setTime(int,int,int);   // set hour, minute, second
    void printUniversal();       // print universal-time format
    void printStandard();        // print standard-time format
    
private: 
    int hour;                    // 0-23
    int minute;                  // 0-59 
    int second;                  // 0-59

}; // end class Time

#endif /* TIME_H */

