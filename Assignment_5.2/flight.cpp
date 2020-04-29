/*
 * Class created for assignment 4.1 used and modified in assignment 5.2
 * Author: Jasen Ratnam 40094237
 * Date: 11/04/2018
 * Due: 11/11/2018
 * Assignment 4: Strings/ User-Defined Classes
 * 4.1: Flights of an airline company.
 * flight class which represents flights of an airline company.
 * Define flight object by the attributes:
 * number (int),
 * departure time (string),
 * departure date (string),
 * departure city (string),
 * destination city (string).
 * Contains the implementation of the member functions of the class.
 */

#include <iostream>
#include <iomanip>
#include "Date.h"
#include "Time.h"
#include "flight.h"

using namespace std;

/*
 * Default constructor of flight with default values.
 * Creates a flight object.
 */
flight::flight() 
{
    Date date;
    Time time;
    setNumber(747);
    setDepartureTime(time);
    setDepartureDate(date);
    setDepartureCity("Montreal");
    setDestinationCity("Toronto");
}

/*
 * Constructor of flight with user given variables.
 * Gets:
 * flight number..
 * flight departure time.
 * flight departure date.
 * flight departure city.
 * flight destination city.
 * creates a flight object.
 */
flight::flight(int number, Time depTime, Date depDate, string depCity, string desCity) 
{
    setNumber(number);
    setDepartureTime(depTime);
    setDepartureDate(depDate);
    setDepartureCity(depCity);
    setDestinationCity(desCity);
}

/*
 * Sets the flight number variable to given int.
 */
void flight::setNumber(int numb) 
{  
    number = numb;
}

/*
 * Sets the departure time variable to given string.
 */
void flight::setDepartureTime(Time time) 
{  
    depTime = time;
}

/*
 * Sets the departure date variable to given string.
 */
void flight::setDepartureDate(Date date) 
{  
    depDate = date;
}

/*
 * Sets the departure city variable to given string.
 */
void flight::setDepartureCity(string city) 
{  
    depCity = city;
}

/*
 * Sets the destination city variable to given string.
 */
void flight::setDestinationCity(string city) 
{  
    desCity = city;
}

/*
 * Function that returns the flight number.
 */
int flight::getNumber()
{
    return number;
}

/*
 * Function that returns the flight departure time.
 */
Time flight::getDepartureTime()
{
    return depTime;
}

/*
 * Function that returns the flight departure date.
 */
Date flight::getDepartureDate()
{
    return depDate;
}

/*
 * Function that returns the flight departure city.
 */
string flight::getDepartureCity()
{
    return depCity;
}


/*
 * Function that returns the flight destination city.
 */
string flight::getDestinationCity()
{
    return desCity;
}




