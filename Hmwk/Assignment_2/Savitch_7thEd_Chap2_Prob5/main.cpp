/* 
 * File:   main.cpp
 * Author: John Decker
 * Purpose: Assignment 2, Savitch 7th Edition, Chapter 2, Problem 5
 * Created on July 1, 2014, 7:07 PM
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
    const float Mths_per_yr = 12;
    const float Percent = 100;
    float rate, duration, face_value, principle, mthly_payment;
    char repeat;
    
    repeat = 'y';
    while (repeat == 'y'||repeat == 'Y')
    {
    cout << "Press return after entering a number.\n";
    cout << "Enter the amount of money you need (in dollars).\n";
    cin >> principle;
    cout << "Enter the interest rate of the loan (percentage).\n";
    cin >> rate;
    cout << "Enter the duration of the loan (in months).\n";
    cin >> duration;
    
    face_value = principle / (1 - (rate / Percent) * (duration / Mths_per_yr));
    mthly_payment = face_value / duration;
    
    cout << "The required face value of the loan is $";
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << face_value;
    cout << ".\n";
    cout << "Your monthly payment will be $";
    cout << mthly_payment;
    cout << ".\n";
    
    cout << "Would you like to calculate again? (Y or N) (Press Enter)\n";
    cin >> repeat;
    }
    
//Exit Stage Right!    
    return 0;
}