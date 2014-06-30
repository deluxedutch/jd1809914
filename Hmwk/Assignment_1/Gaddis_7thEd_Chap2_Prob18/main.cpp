/* 
 * File:   main.cpp
 * Author: John Decker
 * Purpose: Assignment 1, Gaddis 7th Edition, Chapter 2, Problem 18
 * Created on June 30, 2014, 3:04 PM
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
    const float in_per_cm = 0.3937;
    const float mm_per_yr = 3.1;
    const int years = 20;
    const float mm_per_cm = 10;
    float searise_cm, searise_in;

    searise_cm = mm_per_yr * years * mm_per_cm;
    searise_in = searise_cm * in_per_cm;
    
    cout << "The total sea level rise in ";
    cout << years;
    cout << " years is ";
    cout << searise_cm;
    cout << " centimeters or ";
    cout << searise_in;
    cout << " inches.\n";

//Exit Stage Right!
    return 0;
}