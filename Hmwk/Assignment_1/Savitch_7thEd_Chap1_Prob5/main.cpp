/* 
 * File:   main.cpp
 * Author: John Decker
 * Purpose: Assignment 1, Savitch 7th Edition, Chapter 1, Problem 5
 * Created on June 25, 2014, 9:27 PM
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
    int num1, num2, product, sum;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter your first number:\n";
    cin >> num1;
    cout << "Enter your second number:\n";
    cin >> num2;
    
    sum = num1 + num2;
    product = num1 * num2;
    
    cout << "The sum of the numbers is ";
    cout << sum;
    cout << ".\n";
    cout << "The product of the numbers is ";
    cout << product;
    cout << ".\n";
    
//Exit Stage Right!    
    return 0;
}