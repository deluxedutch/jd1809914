/* 
 * File:   main.cpp
 * Author: John Decker
 * Purpose: Assignment 2, Savitch 7th Edition, Chapter 2, Problem 1
 * Created on June 30, 2014, 7:51 PM
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
    const float Oz_per_mton = 35273.92;
    float oz_per_box, weightmtons, num_of_boxes;
    char repeat;
    
    repeat = 'y';
    while (repeat == 'y'||repeat == 'Y')
    {
    cout << "Press return after entering a number.\n";
    cout << "Enter the weight of the box of cereal (in ounces).\n";
    cin >> oz_per_box;
    
    weightmtons = oz_per_box / Oz_per_mton;
    num_of_boxes = Oz_per_mton / oz_per_box;
    
    cout << "The weight per box (in metric tons) is ";
    cout << weightmtons;
    cout << ".\n";
    cout << "The number of boxes needed to equal 1 metric ton is ";
    cout << num_of_boxes;
    cout << ".\n";
    
    cout << "Would you like to calculate again? (Y or N) (Press Enter)\n";
    cin >> repeat;
    }
    
//Exit Stage Right!    
    return 0;
}