/* 
 * File:   main.cpp
 * Author: John Decker
 * Purpose: Assignment 2, Savitch 7th Edition, Chapter 2, Problem 9
 * Created on July 2, 2014, 8:46 PM
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
    const float Interest = 0.015;
    const float Mthly_payment = 50;
    const float Price = 1000;
    float time, outstanding, int_paid, payment;
    char repeat;
    
    repeat = 'y';
    
    while (repeat == 'y'||repeat == 'Y')
    {
        time = 0;
        int_paid = 0;
        outstanding = Price;
                
        while (outstanding > 0)
        {
                payment = Mthly_payment - (outstanding * Interest);
                outstanding = outstanding - payment;
                time++;
                int_paid = int_paid + (outstanding * Interest);
        }
        
        cout << "The amount of months to pay off the stereo will be ";
        cout << time;
        cout << " months.\n";
        cout << "The total interest paid will be $";
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout << int_paid;
        cout << ".\n";
    
        cout << "Would you like to calculate again? (Y or N) (Press Enter)\n";
        cin >> repeat;
    }
//Exit Stage Right!    
    return 0;
}