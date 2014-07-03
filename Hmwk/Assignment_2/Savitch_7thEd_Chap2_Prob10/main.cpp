/* 
 * File:   main.cpp
 * Author: John Decker
 * Purpose: Assignment 2, Savitch 7th Edition, Chapter 2, Problem 10
 * Created on July 2, 2014, 10:10 PM
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
    int integer, neg_sum, pos_sum, sum, i;
    char repeat;
    
    repeat = 'y';
    
    while (repeat == 'y'||repeat == 'Y')
    {
        neg_sum = 0;
        pos_sum = 0;
        sum = 0;
        cout << "Please enter ten integers (seperated by spaces or hit Enter";
        cout << " between each number).";
        for (i=0;i<10;i++)
        {
            cin >> integer;
            if (integer >= 0)
            {
                pos_sum += integer;
            } 
            else     
            {
                neg_sum += integer;
            }  
        }
        
        sum = pos_sum + neg_sum;
        
        cout << "The sum of the positive numbers is ";
        cout << pos_sum;
        cout << ".\n";
        cout << "The sum of the negative numbers is ";
        cout << neg_sum;
        cout << ".\n";
        cout << "The sum of the numbers is ";
        cout << sum;
        cout << ".\n";
    
        cout << "Would you like to calculate again? (Y or N) (Press Enter)\n";
        cin >> repeat;
    }
//Exit Stage Right!    
    return 0;
}