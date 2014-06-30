/* 
 * File:   main.cpp
 * Author: John Decker
 * Purpose: Assignment 1, Savitch 7th Edition, Chapter 1, Problem 6
 * Created on June 26, 2014, 12:07 AM
 */
//System Level Libraries
#include <iostream>
//a. Putting an extra space between the < and iostream gives a fatal error
//during compilation: " iostream: No such file or directory."
//b. Removing the < symbol in the include directive gives a fatal error during
//compilation: "#include expects "FILENAME" or <FILENAME>."
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main()
//c. Omitting the int in int main() actually did not cause a fatal error. Build
//ran succesfully.
//d. Misspelling the word main resulted in a fatal error during compilation.
//error: ld returned 1 exit status.
//e. Omitting the () after main resulted in a fatal error during compilation.
//error: expected primary-expression before ‘int’.
{
    int num1, num2, product, sum;
    
    cout << "Press return after entering a number.\n";
    //f. Misspelling cout resulted in fatal error in compilation. error: ‘cot’ 
    //was not declared in this scope
    // Omitting the << after cout resulted in a fatal error in compilation.
    //error: expected ‘;’ before string constant.
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
//Omitting the final bracket resulted in a fatal error during compilation.
//error: expected ‘}’ at end of input