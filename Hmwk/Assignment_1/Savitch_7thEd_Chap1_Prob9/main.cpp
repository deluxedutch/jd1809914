/* 
 * File:   main.cpp
 * Author: John Decker
 * Purpose: Assignment 1, Savitch 7th Edition, Chapter 1, Problem 9
 * Created on June 30, 2014, 2:50 PM
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
    const float accel = 32;
    float time, distance;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the amount of time in freefall (in seconds):\n";
    cin >> time;
    
    distance = (accel * time * time) / 2;
    
    cout << "\n";
    cout << "The total distance the object falls in ";
    cout << time;
    cout << " seconds is ";
    cout << distance;
    cout << " feet.\n";
    
//Exit Stage Right!    
    return 0;
}