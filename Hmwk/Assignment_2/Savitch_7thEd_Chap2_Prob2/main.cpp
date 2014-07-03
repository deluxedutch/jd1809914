/* 
 * File:   main.cpp
 * Author: John Decker
 * Purpose: Assignment 2, Savitch 7th Edition, Chapter 2, Problem 2
 * Created on June 30, 2014, 8:40 PM
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
    const float Percent_sweet = 0.001;
    const float Oz_per_pound = 16;
    float ld50_mouse, ld50_human, weight_human, weight_mouse, weight_drink;
    char repeat;
    
    repeat = 'y';
    while (repeat == 'y'||repeat == 'Y')
    {
    cout << "Press return after entering a number.\n";
    cout << "Enter the weight of the lethal dose for the mouse (in ounces).\n";
    cin >> ld50_mouse;
    cout << "Enter the weight of the mouse (in ounces).\n";
    cin >> weight_mouse;    
    cout << "Enter your target weight (in pounds).\n";
    cin >> weight_human;
    
    ld50_human =  (ld50_mouse / weight_mouse);
    weight_drink = (ld50_human * (weight_human * Oz_per_pound)) / Percent_sweet;
    
    cout << "The lethal dose of diet soda is ";
    cout << weight_drink;
    cout << " ounces.\n";
    
    cout << "Would you like to calculate again? (Y or N) (Press Enter)\n";
    cin >> repeat;
    }
    
//Exit Stage Right!    
    return 0;
}