/* 
 * File:   main.cpp
 * Author: John Decker
 * Purpose: Assignment 2, Savitch 7th Edition, Chapter 2, Problem 6
 * Created on July 2, 2014, 4:32 PM
 */
//System Level Libraries
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main()
{
    int capacity, attending;
    char repeat;
    
    repeat = 'y';
    while (repeat == 'y'||repeat == 'Y')
    {
        cout << "Press return after entering a number.\n";
        cout << "Enter the maximum capacity of the room.\n";
        cin >> capacity;
        cout << "Enter the number of people attending the meeting.\n";
        cin >> attending;
    
        if (capacity >= attending)
        {
                cout << "The meeting is legal. ";
                cout << capacity - attending;
                cout << " additional people may attend.\n";
        }
        else
        {    
                cout << "The meeting is illegal. Capacity exceeded by ";
                cout << attending - capacity;
                cout << " attendees.\n";
        }
    
        cout << "Would you like to calculate again? (Y or N) (Press Enter)\n";
        cin >> repeat;
    }
    
//Exit Stage Right!    
    return 0;
}