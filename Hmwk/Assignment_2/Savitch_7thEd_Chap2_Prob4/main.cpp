/* 
 * File:   main.cpp
 * Author: John Decker
 * Purpose: Assignment 2, Savitch 7th Edition, Chapter 2, Problem 4
 * Created on June 30, 2014, 9:30 PM
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
    const float Percent_raise = 0.076;
    const float Mn_per_yr = 12;
    float prev_yr_salary, retro_pay, new_yr_salary, new_mn_salary, mns_retro;
    char repeat;
    
    repeat = 'y';
    while (repeat == 'y'||repeat == 'Y')
    {
    cout << "Press return after entering a number.\n";
    cout << "Enter your previous year's salary (in dollars).\n";
    cin >> prev_yr_salary;
    cout << "Enter the amount of months being retroactively paid.\n";
    cin >> mns_retro;
    
    retro_pay =  (prev_yr_salary * Percent_raise) / (Mn_per_yr / mns_retro);
    new_yr_salary = (prev_yr_salary * Percent_raise) + prev_yr_salary;
    new_mn_salary = new_yr_salary / Mn_per_yr;
    
    cout << "Your retroactive pay due is $";
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << retro_pay;
    cout << ".\n";
    cout << "Your new yearly salary is $";
    cout << new_yr_salary;
    cout << ".\n";
    cout << "Your new monthly salary is $";
    cout << new_mn_salary;
    cout << ".\n";
    
    cout << "Would you like to calculate again? (Y or N) (Press Enter)\n";
    cin >> repeat;
    }
    
//Exit Stage Right!    
    return 0;
}