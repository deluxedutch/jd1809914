/* 
 * File:   main.cpp
 * Author: John Decker
 * Purpose: Assignment 2, Savitch 7th Edition, Chapter 2, Problem 7
 * Created on July 2, 2014, 5:37 PM
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
    const float Std_rate = 16.78;
    const float Overtime = Std_rate * 1.5;
    const float Full_week = 40;
    const float SSI = 0.06;
    const float Federal = 0.14;
    const float State = 0.05;
    const float Union_wh = 10;
    const float Health = 35;
    float hrs_worked, dependents, gross_pay, net_takehome, ssi_wh, federal_wh,
            state_wh, health_wh;
    char repeat;
    
    repeat = 'y';
    
    while (repeat == 'y'||repeat == 'Y')
    {
        cout << "Press return after entering a number.\n";
        cout << "Enter the amount of hours worked in the week.\n";
        cin >> hrs_worked;
        cout << "Enter the amount of dependents you have.\n";
        cin >> dependents;
        
        if (hrs_worked <= 40)
        {
            gross_pay = hrs_worked * Std_rate;
        }
        else
        {    
            gross_pay = (Full_week * Std_rate) + ((hrs_worked - Full_week)
                    * Overtime);
        }
        
        ssi_wh = gross_pay * SSI;
        federal_wh = gross_pay * Federal;
        state_wh = gross_pay * State;
        
        if (dependents >= 3)
        {
            health_wh = 35;
        }
        else
        {    
            health_wh = 0;
        }
        
        net_takehome = gross_pay - ssi_wh - federal_wh - state_wh - Union_wh -
                health_wh;
        
        cout << "Gross pay: $";
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout << gross_pay;
        cout << "\n";
        cout << "Social Security withheld: $";
        cout << ssi_wh;
        cout << "\n";
        cout << "Federal Income Tax withheld: $";
        cout << federal_wh;
        cout << "\n";
        cout << "State Income Tax withheld: $";
        cout << state_wh;
        cout << "\n";
        cout << "Union Dues withheld: $";
        cout << Union_wh;
        cout << "\n";
        cout << "Supplemental Health Care withheld: $";
        cout << health_wh;
        cout << "\n";
        cout << "Net pay: $";
        cout << net_takehome;
        cout << "\n";
    
        cout << "Would you like to calculate again? (Y or N) (Press Enter)\n";
        cin >> repeat;
    }
    
//Exit Stage Right!    
    return 0;
}