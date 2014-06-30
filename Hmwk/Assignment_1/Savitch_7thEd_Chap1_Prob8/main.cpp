/* 
 * File:   main.cpp
 * Author: John Decker
 * Purpose: Assignment 1, Savitch 7th Edition, Chapter 1, Problem 8
 * Created on June 30, 2014, 2:39 PM
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
    int quarters, dimes, nickels, total;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of quarters:\n";
    cin >> quarters;
    cout << "Enter the number of dimes:\n";
    cin >> dimes;
    cout << "Enter the number of nickels:\n";
    cin >> nickels;
    
    total = (quarters * 25) + (dimes * 10) + (nickels * 5);
    
    cout << "\n";
    cout << "The total value of the coins is ";
    cout << total;
    cout << " cents.\n";
    
//Exit Stage Right!    
    return 0;
}