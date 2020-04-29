/*
 * Author: Jasen Ratnam 40094237
 * Date: 11/20/2018
 * Due: 11/25/2018
 * Assignment 5: User-Defined Classes/ Pointers
 * 5.2: modifying flight class from 4.1 to add date and time
 * Contains the implementation of the member functions of the class.
 */ 
#include <iostream>
#include <cmath>
#include "flight.h"
#include "Date.h"
#include "Time.h"

using namespace std;

/*
 * Function that gets information about a flight from user.
 * And creates an flight object from the flight class constructor.
 * returns flight object.
 */
flight getFlight()
{
    // Initialize variables needed to create flight object.
    int number;
    Time depTime;
    Date depDate;
    string depCity;
    string desCity;
    int day;
    int month;
    int year;
    int hour;
    int min;
    int sec;
    
    // Ask and save the information about the flight.
    cout << "Enter information about flight:\n"
            "1. Enter flight number: (An integer number)";
    cin >>  number;
    
    // Check if input is not an integer.
    // Print error message if not an integer and get new input until an integer is inserted.
    // Save correct input in place of wrong input.
    // While loop until an integer is inserted.
    while(!cin)
    {
        cout << "ERROR: The input was not a number, Please enter a number:\n";
        cin.clear();          // Clear the input.
        cin.ignore();         // Ignore the current input and wait for new input.
        cin >> number;     // Save input.
    }
    
    cout << "2. Enter flight departure time: ";
    cout << "Enter information about the time: \n"
            "1. Enter the hour: ";
    cin >>  hour;

    // Check if input is not an integer.
    // Print error message if not an integer and get new input until an integer is inserted.
    // Save correct input in place of wrong input.
    // While loop until an integer is inserted.
    while(!cin)
    {
        cout << "ERROR: The input was not a number, Please enter a number:\n";
        cin.clear();          // Clear the input.
        cin.ignore();         // Ignore the current input and wait for new input.
        cin >> hour;            // Save input.
    }
    
    cout << "2. Enter the minute: ";
    cin >>  min;

    // Check if input is not an integer.
    // Print error message if not an integer and get new input until an integer is inserted.
    // Save correct input in place of wrong input.
    // While loop until an integer is inserted.
    while(!cin)
    {
        cout << "ERROR: The input was not a number, Please enter a number:\n";
        cin.clear();          // Clear the input.
        cin.ignore();         // Ignore the current input and wait for new input.
        cin >> min;            // Save input.
    }
    
    cout << "3. Enter the second: ";
    cin >>  sec;

    // Check if input is not an integer.
    // Print error message if not an integer and get new input until an integer is inserted.
    // Save correct input in place of wrong input.
    // While loop until an integer is inserted.
    while(!cin)
    {
        cout << "ERROR: The input was not a number, Please enter a number:\n";
        cin.clear();          // Clear the input.
        cin.ignore();         // Ignore the current input and wait for new input.
        cin >> sec;            // Save input.
    }
    
    cout << "3. Enter flight departure date: ";
    cout << "Enter information about the date: \n"
            "1. Enter the day: ";
    cin >>  day;

    // Check if input is not an integer.
    // Print error message if not an integer and get new input until an integer is inserted.
    // Save correct input in place of wrong input.
    // While loop until an integer is inserted.
    while(!cin)
    {
        cout << "ERROR: The input was not a number, Please enter a number:\n";
        cin.clear();          // Clear the input.
        cin.ignore();         // Ignore the current input and wait for new input.
        cin >> day;            // Save input.
    }
    
    cout << "2. Enter the month: ";
    cin >>  month;

    // Check if input is not an integer.
    // Print error message if not an integer and get new input until an integer is inserted.
    // Save correct input in place of wrong input.
    // While loop until an integer is inserted.
    while(!cin)
    {
        cout << "ERROR: The input was not a number, Please enter a number:\n";
        cin.clear();          // Clear the input.
        cin.ignore();         // Ignore the current input and wait for new input.
        cin >> month;            // Save input.
    }
    
    cout << "3. Enter the year: ";
    cin >>  year;

    // Check if input is not an integer.
    // Print error message if not an integer and get new input until an integer is inserted.
    // Save correct input in place of wrong input.
    // While loop until an integer is inserted.
    while(!cin)
    {
        cout << "ERROR: The input was not a number, Please enter a number:\n";
        cin.clear();          // Clear the input.
        cin.ignore();         // Ignore the current input and wait for new input.
        cin >> year;            // Save input.
    }
    
    cout << "4. Enter flight departure city: ";
    cin >>  depCity;
 
    cout << "5. Enter flight destination city: ";
    cin >>  desCity;
    
    depDate.setDate(day,month,year);
    depTime.setTime(hour,min,sec);
    
    // Create flight object
    flight flight(number, depTime, depDate, depCity, desCity);
    
    // Return flight
    return flight;
}

/*
 * Function that does the menu and choices fro commands.
 * Goes in a loop until user chooses to quit.
 */
void menuAction()
{
    // Create 2 flight object
    
    flight *flight1Ptr;
    
    flight1Ptr = new flight;
    
    *flight1Ptr = getFlight();
    
    flight *flight2Ptr;
    
    flight2Ptr = new flight;
    
    *flight2Ptr = getFlight();
    
    //boolean: user can choose options until it is false.
    bool playing = true;
    
    // Variable to save the choice chosen.
    int choice;
    
    // String to save new time.
    string time;
    
    // String to save new date.
    string date;
    
    // Give choices
    cout << "\nChoose one of the following options: (To test functions of class)\n"
            "1. Get the first flight number.\n"
            "2. Get the second flight number.\n"
            "3. Get the first flight departure time.\n"
            "4. Get the second flight departure time.\n"
            "5. Get the first flight departure date.\n"
            "6. Get the second flight departure date.\n"
            "7. Get the first flight departure city.\n"
            "8. Get the second flight departure city.\n"
            "9. Get the first flight destination city\n"
            "10. Get the second flight destination city.\n"
            "11. Modify the first flight departure time.\n"
            "12. Modify the second flight departure time.\n"
            "13. Modify the first flight departure date.\n"
            "14. Modify the second flight departure date.\n"
            "15. Exit.\n\n";

    // Save choice.
    cin >> choice;
    cout << "\n";
    
    // Check if input is not an integer.
    // Print error message if not an integer and get new input until an integer is inserted.
    // Save correct input in place of wrong input.
    // While loop until an integer is inserted.
    while(!cin)
    {
        cout << "ERROR: The input was not a number, Please enter a number:\n";
        cin.clear();          // Clear the input.
        cin.ignore();         // Ignore the current input and wait for new input.
        cin >> choice;     // Save input.
    }
    
    // Loop with the current choice.
    while(playing)
    {
        switch(choice)
        {
            case 1:
                {   
                    cout << "The number of flight 1 is: " << (*flight1Ptr).getNumber();
                    break;
                }
            case 2:
                {
                    cout << "The number of flight 2 is: " << (*flight2Ptr).getNumber();
                    break;
                }
            case 3:
                {
                    cout << "The departure time of flight 1 is: ";
                    (*flight1Ptr).getDepartureTime().printStandard();
                    break;
                }      
            case 4:
                {
                    cout << "The departure time of flight 2 is: ";
                    (*flight2Ptr).getDepartureTime().printStandard();
                    break;
                }
            case 5:
                {
                    cout << "The departure date of flight 1 is: ";
                    (*flight1Ptr).getDepartureDate().printDate();
                    break;
                }
            case 6:
                {
                    cout << "The departure date of flight 2 is: ";
                    (*flight2Ptr).getDepartureDate().printDate();
                    break;
                }
            case 7:
                {
                    cout << "The departure city of flight 1 is: " << (*flight1Ptr).getDepartureCity();
                    break;
                }
            case 8:
                {
                    cout << "The departure city of flight 2 is: " << (*flight2Ptr).getDepartureCity();
                    break;
                }
            case 9:
                {
                    cout << "The destination city of flight 1 is: " << (*flight1Ptr).getDestinationCity();
                    break;
                }
            case 10:
                {
                    cout << "The destination city of flight 2 is: " << (*flight2Ptr).getDestinationCity();
                    break;
                }
            case 11:
                {
                    int hour;
                    int min;
                    int sec;
                    
                    cout << "Enter the new departure time: \n";
                    // Ask for info to create time object
                    cout << "1. Enter the hour: ";
                    cin >>  hour;

                    // Check if input is not an integer.
                    // Print error message if not an integer and get new input until an integer is inserted.
                    // Save correct input in place of wrong input.
                    // While loop until an integer is inserted.
                    while(!cin)
                    {
                        cout << "ERROR: The input was not a number, Please enter a number:\n";
                        cin.clear();          // Clear the input.
                        cin.ignore();         // Ignore the current input and wait for new input.
                        cin >> hour;            // Save input.
                    }

                    cout << "2. Enter the minute: ";
                    cin >>  min;

                    // Check if input is not an integer.
                    // Print error message if not an integer and get new input until an integer is inserted.
                    // Save correct input in place of wrong input.
                    // While loop until an integer is inserted.
                    while(!cin)
                    {
                        cout << "ERROR: The input was not a number, Please enter a number:\n";
                        cin.clear();          // Clear the input.
                        cin.ignore();         // Ignore the current input and wait for new input.
                        cin >> min;            // Save input.
                    }

                    cout << "3. Enter the second: ";
                    cin >>  sec;

                    // Check if input is not an integer.
                    // Print error message if not an integer and get new input until an integer is inserted.
                    // Save correct input in place of wrong input.
                    // While loop until an integer is inserted.
                    while(!cin)
                    {
                        cout << "ERROR: The input was not a number, Please enter a number:\n";
                        cin.clear();          // Clear the input.
                        cin.ignore();         // Ignore the current input and wait for new input.
                        cin >> sec;            // Save input.
                    }
                    
                    // create Date object and set it to the flight.
                    Time time;
                    time.setTime(hour,min,sec);
                    (*flight1Ptr).setDepartureTime(time);
                    cout << "New departure time for the first flight: ";
                    (*flight1Ptr).getDepartureTime().printStandard();
                    break;
                }
            case 12:
                {
                    int hour;
                    int min;
                    int sec;
                    
                    cout << "Enter the new departure time: \n";
                    // Ask for info to create time object
                    cout << "1. Enter the hour: ";
                    cin >>  hour;

                    // Check if input is not an integer.
                    // Print error message if not an integer and get new input until an integer is inserted.
                    // Save correct input in place of wrong input.
                    // While loop until an integer is inserted.
                    while(!cin)
                    {
                        cout << "ERROR: The input was not a number, Please enter a number:\n";
                        cin.clear();          // Clear the input.
                        cin.ignore();         // Ignore the current input and wait for new input.
                        cin >> hour;            // Save input.
                    }

                    cout << "2. Enter the minute: ";
                    cin >>  min;

                    // Check if input is not an integer.
                    // Print error message if not an integer and get new input until an integer is inserted.
                    // Save correct input in place of wrong input.
                    // While loop until an integer is inserted.
                    while(!cin)
                    {
                        cout << "ERROR: The input was not a number, Please enter a number:\n";
                        cin.clear();          // Clear the input.
                        cin.ignore();         // Ignore the current input and wait for new input.
                        cin >> min;            // Save input.
                    }

                    cout << "3. Enter the second: ";
                    cin >>  sec;

                    // Check if input is not an integer.
                    // Print error message if not an integer and get new input until an integer is inserted.
                    // Save correct input in place of wrong input.
                    // While loop until an integer is inserted.
                    while(!cin)
                    {
                        cout << "ERROR: The input was not a number, Please enter a number:\n";
                        cin.clear();          // Clear the input.
                        cin.ignore();         // Ignore the current input and wait for new input.
                        cin >> sec;            // Save input.
                    }
                    
                    // create time object and set it to the flight.
                    Time time;
                    time.setTime(hour,min,sec);
                    (*flight2Ptr).setDepartureTime(time);
                    cout << "New departure time for the second flight: ";
                    (*flight2Ptr).getDepartureTime().printStandard();
                    break;
                }
            case 13:
                {
                    int day;
                    int month;
                    int year;
                    
                    cout << "Enter the new departure date: \n";
                    // Get info to create date object.
                    cout << "Enter information about the date: \n"
                    "1. Enter the day: ";
                    cin >>  day;

                    // Check if input is not an integer.
                    // Print error message if not an integer and get new input until an integer is inserted.
                    // Save correct input in place of wrong input.
                    // While loop until an integer is inserted.
                    while(!cin)
                    {
                        cout << "ERROR: The input was not a number, Please enter a number:\n";
                        cin.clear();          // Clear the input.
                        cin.ignore();         // Ignore the current input and wait for new input.
                        cin >> day;            // Save input.
                    }

                    cout << "2. Enter the month: ";
                    cin >>  month;

                    // Check if input is not an integer.
                    // Print error message if not an integer and get new input until an integer is inserted.
                    // Save correct input in place of wrong input.
                    // While loop until an integer is inserted.
                    while(!cin)
                    {
                        cout << "ERROR: The input was not a number, Please enter a number:\n";
                        cin.clear();          // Clear the input.
                        cin.ignore();         // Ignore the current input and wait for new input.
                        cin >> month;            // Save input.
                    }

                    cout << "3. Enter the year: ";
                    cin >>  year;

                    // Check if input is not an integer.
                    // Print error message if not an integer and get new input until an integer is inserted.
                    // Save correct input in place of wrong input.
                    // While loop until an integer is inserted.
                    while(!cin)
                    {
                        cout << "ERROR: The input was not a number, Please enter a number:\n";
                        cin.clear();          // Clear the input.
                        cin.ignore();         // Ignore the current input and wait for new input.
                        cin >> year;            // Save input.
                    }
                    
                    // create Date object and set it to the flight.
                    Date date;
                    date.setDate(day, month, year);
                    (*flight1Ptr).setDepartureDate(date);
                    cout << "New departure date for the first flight: ";
                    (*flight1Ptr).getDepartureDate().printDate();
                    break;
                }
            case 14:
                {   
                    int day;
                    int month;
                    int year;
                    
                    cout << "Enter the new departure date: \n";
                    // Enter info to create date object.
                    cout << "Enter information about the date: \n"
                    "1. Enter the day: ";
                    cin >>  day;

                    // Check if input is not an integer.
                    // Print error message if not an integer and get new input until an integer is inserted.
                    // Save correct input in place of wrong input.
                    // While loop until an integer is inserted.
                    while(!cin)
                    {
                        cout << "ERROR: The input was not a number, Please enter a number:\n";
                        cin.clear();          // Clear the input.
                        cin.ignore();         // Ignore the current input and wait for new input.
                        cin >> day;            // Save input.
                    }

                    cout << "2. Enter the month: ";
                    cin >>  month;

                    // Check if input is not an integer.
                    // Print error message if not an integer and get new input until an integer is inserted.
                    // Save correct input in place of wrong input.
                    // While loop until an integer is inserted.
                    while(!cin)
                    {
                        cout << "ERROR: The input was not a number, Please enter a number:\n";
                        cin.clear();          // Clear the input.
                        cin.ignore();         // Ignore the current input and wait for new input.
                        cin >> month;            // Save input.
                    }

                    cout << "3. Enter the year: ";
                    cin >>  year;

                    // Check if input is not an integer.
                    // Print error message if not an integer and get new input until an integer is inserted.
                    // Save correct input in place of wrong input.
                    // While loop until an integer is inserted.
                    while(!cin)
                    {
                        cout << "ERROR: The input was not a number, Please enter a number:\n";
                        cin.clear();          // Clear the input.
                        cin.ignore();         // Ignore the current input and wait for new input.
                        cin >> year;            // Save input.
                    }
                    
                    // create Date object and set it to the flight.
                    Date date;
                    date.setDate(day, month, year);
                    (*flight2Ptr).setDepartureDate(date);
                    cout << "New departure date for the second flight: ";
                    (*flight2Ptr).getDepartureDate().printDate();
                    break;
                }
            case 15:
                {
                    // Quit program:
                    playing = false;
                    break;
                }
            default: // else input is wrong, ask for new input.
                {
                    cout << "Invalid input. Please enter a correct choice\n";
                }
        }
    
        // Ask for new input. if boolean is true
        if(playing) 
        {
            cout << "\n\nPlease choose another option from the menu: ";
            
            // Save input
            cin >> choice;
            cout << "\n";
            
             // Check if input is not an integer.
            // Print error message if not an integer and get new input until an integer is inserted.
            // Save correct input in place of wrong input.
            // While loop until an integer is inserted.
            while(!cin)
            {
                cout << "ERROR: The input was not a number, Please enter a number:\n";
                cin.clear();          // Clear the input.
                cin.ignore();         // Ignore the current input and wait for new input.
                cin >> choice;     // Save input.
            }
        }
    }
}

int main() 
{
    // ask for flight info and choices.
    menuAction();
    
    return 0;
}