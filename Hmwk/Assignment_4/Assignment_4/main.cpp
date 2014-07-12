/*
 * File: main.cpp
 * Author: John Decker
 * Purpose: Assignment 4
 * Created on July 11, 2014, 6:34 PM
 */
//System Level Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main()
{
    //General Menu Format
    bool loop=true;
    do
    {
        //Display the selection
        cout << "\n";
        cout << "1.  Gaddis 7th Edition, Chapter 5, Problem 1\n";
        cout << "2.  Gaddis 7th Edition, Chapter 5, Problem 2\n";
        cout << "3.  Gaddis 7th Edition, Chapter 5, Problem 3\n";
        cout << "4.  Gaddis 7th Edition, Chapter 5, Problem 4\n";
        cout << "5.  Gaddis 7th Edition, Chapter 5, Problem 5\n";
        cout << "6.  Gaddis 7th Edition, Chapter 5, Problem 6\n";
        cout << "7.  Gaddis 7th Edition, Chapter 5, Problem 7\n";
        cout << "8.  Gaddis 7th Edition, Chapter 5, Problem 8\n";
        cout << "9.  Gaddis 7th Edition, Chapter 5, Problem 9\n";
        cout << "10. Gaddis 7th Edition, Chapter 5, Problem 10\n";
        cout << "Any other input will exit.\n";
        //Read the choice
        int choice;
        cin >> choice;
        cin.clear();
        cout << "\n";
        //Solve a problem that has been chosen.
        switch(choice)
        {
            case 1:
            {
                //Initialize Variables
                int loop, count;
                count = 0;
                //Loop to display ASCII characters.
                for (loop = 32; loop < 128; loop ++)
                {
                    cout << (char)loop;
                    cout << " ";
                    count ++;
                    if (count == 16)//16 characters per row.
                    {
                        count = 0;
                        cout << "\n";
                    }
                }
                break;
            }
            case 2:
            {
                //Initialize Variables
                int integer;
                int startnum = 1;
                //Input positive integer.
                cout << "Input a positive integer up to 10000. (Press Enter)\n";
                cin >> integer;
                cin.clear();
                cout << "\n";
                //Check input is within bounds.
                if ((integer <= 10000)&&(integer > 0))
                {
                    int sum = 0;
                    //Addition loop
                    for (int i=startnum; i <= integer; i++)
                    {
                        sum += i;
                        cout << sum;
                        cout << "\n";
                    }
                }    
                //Invalid input.
                else
                {
                    cout << "Invalid input.\n";
                }
                break;
            }
            case 3:
            {
                //Initialize Variables    
                float miles, speed, time;
                //Input speed.
                cout << "Press Enter after each input.\n";
                cout << "What is the speed of the vehicle (in mph)?\n";
                cin >> speed;
                cin.clear();
                //Loop to check that speed is non-negative.
                while (speed < 0)
                {
                        cout << "Please enter a non-negative speed.";
                        cin >> speed;
                        cin.clear();
                }
                //Input time.
                cout << "How many hours does the vehicle travel?\n";
                cin >> time;
                cin.clear();
                //Loop to check time is greater or equal to 1.
                while (time < 1)
                {
                        cout << "Please enter a number of hours greater than or ";
                        cout << "equal to 1.";
                        cin >> time;
                        cin.clear();
                }

                miles = speed * time;//Calculation of distance.
                //Output table.
                cout << "\n";
                cout << " Hour \t Distance Traveled\n";
                cout << " -----------------------------------------------\n";
                //Loop to calculate distance.
                for(int count = 1; count <= time; count++)
                {
                    cout << " ";
                    cout << count;
                    cout << "\t\t";
                    cout << speed * count;
                    cout << "\n";
                }
                break;
            }
            case 4:
            {
                //Initialize Variables
                const float Ninefifths = (9.0 / 5.0);
                float tempc;
                float tempf;
                //Output table.
                cout << " Celsius\tFahrenheit\n";
                cout << " -----------------------------------------------\n";
                //Loop to calculate Fahrenheit from Celsius.
                for(tempc = 0; tempc <= 20; tempc++)
                {
                    tempf = ((tempc * Ninefifths) + 32);
                    cout << " ";
                    cout << tempc;
                    cout << "\t\t";
                    cout << tempf;
                    cout << "\n";
                }
                break;
            }
            case 5:
            {
                //Initialize Variables
                const float Convert = 0.6214;
                const int Increment = 4;
                float kph;
                float mph;
                //Output table.
                cout << " KPH\t\tMPH\n";
                cout << " -----------------------------------------------\n";
                //Loop to convert from kph to mph.
                for(kph = 60; kph <= 130; kph++)
                {
                    mph = (kph * Convert);
                    cout << " ";
                    cout << kph;
                    cout << "\t\t";
                    cout << mph;
                    cout << "\n";
                    kph = kph + Increment;
                }
                break;
            }
            case 6:
            {
                //Initialize Variables
                const float Riseperyr = 3.1;
                float year;
                float rise;
                //Output table.
                cout << " Year\t\tSea Level Rise (mm)\n";
                cout << " -----------------------------------------------\n";
                //Calculate total sea level rise by year.
                for(year = 1; year <= 25; year++)
                {
                    rise = (year * Riseperyr);
                    cout << " ";
                    cout << year;
                    cout << "\t\t";
                    cout << rise;
                    cout << "\n";
                }
                break;
            }
            case 7:
            {
                //Initialize Variables
                const float Penny = 0.01;
                float worked;
                float day;
                float pay;
                float total = 0;
                //Input the number of days worked in the month.
                cout << "Press enter after each input.\n";
                cout << "Enter number of days worked in the month.\n";
                cin >> worked;
                cin.clear();
                //Check for valid number of days.
                if ((worked >= 1)&&(worked <= 31))
                {
                    //Output table.
                    cout << "\n Day\t\tPay\n";
                    cout << " -----------------------------------------------\n";
                    //Calculate pay by day.
                    for(day = 1; day <= worked; day++)
                    {
                        if (day == 1)
                        {
                            pay = (day * Penny);//Initial penny.
                        }
                        else
                        {
                            pay = (pay * 2);//Double every day after the first.
                        }
                        cout << " ";
                        cout << day;
                        cout << "\t\t";
                        cout.setf(ios::fixed);
                        cout.precision(2);
                        cout <<"$";
                        cout << pay;
                        cout.unsetf(ios_base::floatfield);
                        cout << "\n";
                        total = total + pay;
                    }
                    //Output total
                    cout << "\n";
                    cout << "Your total pay is $";
                    cout.setf(ios::fixed);
                    cout.setf(ios::showpoint);
                    cout.precision(2);
                    cout << total;
                    cout << ".\n";
                }
                //Invalid input.
                else
                {
                    cout << "Invalid input.\n";
                }
                break;
            }
            case 8:
            {
                //Initialize Variables
                const float Calpermn = 3.9;
                const float Increment = 4;
                float min;
                float burned;
                //Output table.
                cout << " Minute\t\tCalories Burned\n";
                cout << " -----------------------------------------------\n";
                //Loop to calculate total calories burned by minute.
                for(min = 10; min <= 30; min++)
                {
                    burned = (min * Calpermn);
                    cout << " ";
                    cout << min;
                    cout << "\t\t";
                    cout << burned;
                    cout << "\n";
                    min = min + Increment;
                }
                break;
            }
            case 9:
            {
                //Initialize Variables
                const float Increase = 0.04;
                const float Original = 2500.00;
                float year;
                float rate;
                //Output Table.
                cout << "\n Year\t\tRate\n";
                cout << " -----------------------------------------------\n";
                //Loop to calculate new country club fee.
                for(year = 1; year <= 7; year++)
                {
                    if (year == 1)
                    {
                        rate = Original;//Original rate.
                    }
                    else
                    {
                        rate = rate + (rate * Increase);//With yearly increase.
                    }
                    cout << " ";
                    cout << year;
                    cout << "\t\t";
                    cout.setf(ios::fixed);
                    cout.precision(2);
                    cout <<"$";
                    cout << rate;
                    cout.unsetf(ios_base::floatfield);
                    cout << "\n";
                }
                break;
            }
            case 10:
            {
                //Initialize Variables    
                int random, guess;
                bool correct;
                random = rand() % 100 + 1;
                correct = false;
                    //While loop. While correct is false.
                    while (correct == false)
                    {

                        cout << "Guess the number (1-100). (Press Enter)\n";
                        cin >> guess;
                        //Guess too high.
                        if ((guess > random)&&(guess >= 1)&&(guess <= 100))
                        {
                            cout << "Too high. Try again.\n";
                        }
                        //Guess too low.
                        else if ((guess < random)&&(guess >= 1)&&(guess <= 100))
                        {
                            cout << "Too low. Try again.\n";
                        }
                        //Guessed correctly.
                        else if ((guess == random)&&(guess >= 1)&&(guess <= 100))
                        {   
                            cout << "Congratulations. You figured out my number.\n";
                            correct = true;
                        }
                        //All else
                        else
                        {
                            cout << "Invalid input.\n";
                        }
                    }
                break;
            }
            default:
            {
                cout<<"Exiting...\n";
                loop=false;
                break;
            }
        }
    }
    while(loop);//Upper do-while
    return 0;
}