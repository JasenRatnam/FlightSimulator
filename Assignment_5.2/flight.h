/*
 * Class specification created for assignment 4.1 used and modified in assignment 5.2
 * Author: Jasen Ratnam 40094237
 * Date: 11/04/2018
 * Due: 11/11/2018
 * Assignment 4: Strings/ User-Defined Classes
 * 4.1: Flights of an airline company.
 * File that contains the specification of the class flight.
 * Initializes the functions and variables used in the class flight.
 */

#ifndef FLIGHT_H
#define FLIGHT_H
#include <string>
#include "Date.h"
#include "Time.h"

using namespace std;

class flight {
public:
    // initialize functions in course class.
    flight();
    flight(int number, Time depTime, Date depDate, string depCity, string desCity);
    void setNumber(int number);
    void setDepartureTime(Time depTime);
    void setDepartureDate(Date depDate);
    void setDepartureCity(string depCity);
    void setDestinationCity(string desCity);
    
    int getNumber();
    Time getDepartureTime();
    Date getDepartureDate();
    string getDepartureCity();
    string getDestinationCity();
    
    
private:
    // Initialize variable in course class. 
    int number;
    Time depTime;
    Date depDate;
    string depCity;
    string desCity;
};

#endif /* FLIGHT_H */

