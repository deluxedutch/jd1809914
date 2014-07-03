/* 
 * File:   main.cpp
 * Author: John Decker
 * Purpose: Assignment 2, Savitch 7th Edition, Chapter 2, Problem 8
 * Created on July 2, 2014, 7:50 PM
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
    const float Percent = 100;
    float price, time, inflation, count;
    char repeat;
    
    repeat = 'y';
    
    while (repeat == 'y'||repeat == 'Y')
    {
        cout << "Press return after entering a number.\n";
        cout << "Enter the current cost of the item (in dollars).\n";
        cin >> price;
        cout << "Enter the number of years from now the item will "
                "be purchased.\n";
        cin >> time;
        cout << "Enter the yearly inflation rate (percentage).\n";
        cin >> inflation;
        
        count = time;
                
        while (count >= 1)
        {
                price = price + ((inflation / Percent) * price);
                count--;
        }
        cout << "The cost of the item after ";
        cout << time;
        cout << " years is $";
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout << price;
        cout << ".\n";
    
        cout << "Would you like to calculate again? (Y or N) (Press Enter)\n";
        cin >> repeat;
    }
//Exit Stage Right!    
    return 0;
}