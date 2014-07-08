/* 
 * File:   main.cpp
 * Author: John Decker
 * Purpose: Assignment 3
 * Created on July 7, 2014, 10:37 PM
 */
//System Level Libraries
#include <iostream>
#include <cstdlib>
using namespace std;
 
//User Defined Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!
int main()
{
    char repeat;
 
    repeat = 'y';
 
    while (repeat == 'y'||repeat == 'Y')
    {
        int choice;
        choice = 0;
        
        cout << "MAIN MENU:\n";
        cout << "1. Gaddis, 7th Edition, Chapter 4, Problem 9\n";
        cout << "2. Gaddis, 7th Edition, Chapter 4, Problem 8\n";
        cout << "3. Gaddis, 7th Edition, Chapter 4, Problem 7\n";
        cout << "4. Gaddis, 7th Edition, Chapter 4, Problem 6\n";
        cout << "5. Gaddis, 7th Edition, Chapter 4, Problem 5\n";
        cout << "6. Gaddis, 7th Edition, Chapter 4, Problem 4\n";
        cout << "7. Gaddis, 7th Edition, Chapter 4, Problem 3\n";
        cout << "8. Gaddis, 7th Edition, Chapter 4, Problem 2\n";
        cout << "9. Gaddis, 7th Edition, Chapter 4, Problem 1\n";
        cout << "10. Savitch, 7th Edition, Chapter 3, Problem 1\n";
        cout << "Hit Enter after input.\n";
        cin >> choice;
        cin.clear();
        
        if (choice == 10)
        {
            char player1, player2;
    
            cout << "Player 1, enter R (for rock), P (for paper), or S ";
            cout << "(for scissors).\n";
            cin  >> player1;
            cout << "Player 2, enter R (for rock), P (for paper), or S ";
            cout << "(for scissors).\n";
            cin  >> player2;

            if ((player1 == 'P'||player1 == 'p')&&(player2 == 'P'||player2 == 'p'))
            {
                cout << "Result: Tie. Nobody wins.\n";
            }
            if ((player1 == 'R'||player1 == 'r')&&(player2 == 'R'||player2 == 'r'))
            {
                cout << "Result: Tie. Nobody wins.\n";
            }
            if ((player1 == 'S'||player1 == 's')&&(player2 == 'S'||player2 == 's'))
            {
                cout << "Result: Tie. Nobody wins.\n";
            }
            if ((player1 == 'P'||player1 == 'p')&&(player2 == 'R'||player2 == 'r'))
            {
                cout << "Result: Player 1 wins. Paper covers rock.\n";
            }
            if ((player1 == 'P'||player1 == 'p')&&(player2 == 'S'||player2 == 's'))
            {
                cout << "Result: Player 2 wins. Scissors cut paper.\n"; 
            }
            if ((player1 == 'R'||player1 == 'r')&&(player2 == 'P'||player2 == 'p'))
            {
                cout << "Result: Player 2 wins. Paper covers rock.\n"; 
            }
            if ((player1 == 'R'||player1 == 'r')&&(player2 == 'S'||player2 == 's'))
            {
                cout << "Result: Player 1 wins. Rock breaks scissors.\n"; 
            }
            if ((player1 == 'S'||player1 == 's')&&(player2 == 'P'||player2 == 'p'))
            {
                cout << "Result: Player 1 wins. Scissors cut paper.\n"; 
            }
            if ((player1 == 'S'||player1 == 's')&&(player2 == 'R'||player2 == 'r'))
            {
                cout << "Result: Player 2 wins. Rock breaks scissors.\n"; 
            }
            if (player1 != 'R'&&player1 != 'r'&&player1 != 'P'&&player1 != 'p'&&
                    player1 != 'S'&&player1 != 's')
            {
                cout << "Invalid input.\n";
            }
            if (player2 != 'R'&&player2 != 'r'&&player2 != 'P'&&player2 != 'p'&&
                    player2 != 'S'&&player2 != 's')
            {
                cout << "Invalid input.\n";
            }
            else
            {
            }
        }
        else if (choice == 9)
        {
            float number1, number2;

            cout << "Press Enter after inputting data.\n";
            cout << "Enter the first number:\n";
            cin  >> number1;
            cout << "Enter the second number:\n";
            cin  >> number2;

            if (number1 > number2)
            {
                cout << number1;
                cout << " is more than ";
                cout << number2;
                cout << ".\n";
                cin.clear();
            }
            else if (number2 > number1)
            {
                cout << number2;
                cout << " is more than ";
                cout << number1;
                cout << ".\n";
                cin.clear();
            }
            else if (number1 == number2)
            {
                cout << number1;
                cout << " is equal to ";
                cout << number2;
                cout << ".\n";
                cin.clear();
            }
            else
            {     
                cout << "Invalid input.\n";
            }
        }
        else if (choice == 8)
        {
            int numeral;
    
            cout << "Press Enter after inputting data.\n";
            cout << "Enter a number 1 through 10 to show in Roman Numerals:\n";
            cin  >> numeral;

            if (numeral == 1)
            {
                cout << numeral;
                cout << " is equal to the Roman numeral I.\n";
                cin.clear();
            }
            else if (numeral == 2)
            {
                cout << numeral;
                cout << " is equal to the Roman numeral II.\n";
                cin.clear();
            }
            else if (numeral == 3)
            {
                cout << numeral;
                cout << " is equal to the Roman numeral III.\n";
                cin.clear();
            }
            else if (numeral == 4)
            {
                cout << numeral;
                cout << " is equal to the Roman numeral IV.\n";
                cin.clear();
            }
            else if (numeral == 5)
            {
                cout << numeral;
                cout << " is equal to the Roman numeral V.\n";
                cin.clear();
            }
            else if (numeral == 6)
            {
                cout << numeral;
                cout << " is equal to the Roman numeral VI.\n";
                cin.clear();
            }
            else if (numeral == 7)
            {
                cout << numeral;
                cout << " is equal to the Roman numeral VII.\n";
                cin.clear();
            }
            else if (numeral == 8)
            {
                cout << numeral;
                cout << " is equal to the Roman numeral VIII.\n";
                cin.clear();
            }
            else if (numeral == 9)
            {
                cout << numeral;
                cout << " is equal to the Roman numeral IX.\n";
                cin.clear();
            }
            else if (numeral == 10)
            {
                cout << numeral;
                cout << " is equal to the Roman numeral X.\n";
                cin.clear();
            }
            else
            {     
                cout << "Invalid input.\n";
            }
        }
        else if (choice == 7)
        {
            int month, date, year;
   
            cout << "Press Enter after inputting data.\n";
            cout << "Enter a month in numeric form (two digits, e.g.,"
                    " June = 06, December = 12):\n";
            cin  >> month;
            cout << "Enter a date in numeric form (two digits, e.g.,"
                    " 6th = 06, 12th = 12):\n";
            cin  >> date;
            cout << "Enter a year in numeric form (two digits, e.g.,"
                    " 1983 = 83, 2010 = 10):\n";
            cin  >> year;

            if (month > 12 || month < 1)
            {
                cout << "Invalid date.\n";
            }
            else if (((month == 1||month == 3||month == 5||month == 7||month == 8||
                    month == 10||month == 12) && date > 31) || ((month == 4||month 
                    == 6|| month == 9||month == 11) && date > 30) || ((month == 2) 
                    && date > 29) || date < 1)
            {
                cout << "Invalid date.\n";
            }
            else if (year > 99 || year < 0)
            {
                cout << "Invalid date.\n";
            }
            else if (month * date == year)
            {
                cout << "The date ";
                cout << month;
                cout << "/";
                cout << date;
                cout << "/";
                cout << year;        
                cout << " is a magic date.\n";
                cin.clear();
            }
            else if (month * date != year)
            {
                cout << "The date ";
                cout << month;
                cout << "/";
                cout << date;
                cout << "/";
                cout << year;       
                cout << " is not a magic date.\n";
                cin.clear();
            }
            else
            {     
                cout << "Invalid input.\n";
            }
        }
        else if (choice == 6)
        {
            float length1, width1, area1, length2, width2, area2;
    
            cout << "Hit Enter after each input.\n";
            cout << "Enter the length of the first rectangle:\n";
            cin >> length1;
            cin.clear();
            cout << "Enter the width of the first rectangle:\n";
            cin >> width1;
            cin.clear();
            cout << "Enter the length of the second rectangle:\n";
            cin >> length2;
            cin.clear();
            cout << "Enter the width of the second rectangle:\n";
            cin >> width2;
            cin.clear();

            area1 = length1 * width1;
            area2 = length2 * width2;

            if (area1 > area2)
            {
                cout << "Rectangle 1 has a larger area than Rectangle 2.\n";
            }
            else if (area1 < area2)
            {
                cout << "Rectangle 2 has a larger area than Rectangle 1.\n";
            }
            else if (area1 == area2)
            {
                cout << "The area of Rectangle 1 and Rectangle 2 are equal.\n";
            }
            else
            {
                cout << "Invalid input.\n";
            }
        }
        else if (choice == 5)
        {
            int numbooks;
    
            cout << "Hit Enter after input.\n";
            cout << "Enter the number of books purchased this month:\n";
            cin >> numbooks;
            cin.clear();

            if (numbooks >= 4)
            {
                cout << "You have earned 60 points!\n";
            }
            else if (numbooks == 3)
            {
                cout << "You have earned 30 points!\n";
            }
            else if (numbooks == 2)
            {
                cout << "You have earned 15 points!\n";
            }
            else if (numbooks == 1)
            {
                cout << "You have earned 5 points!\n";
            }
            else if (numbooks == 0)
            {
                cout << "You have earned 0 points.\n";
            }
            else
            {
                cout << "Invalid input.\n";
            }
        }
        else if (choice == 4)
        {
            
            const float Accel = 9.8;
            float weight, mass;

            cout << "Hit Enter after input.\n";
            cout << "Enter the object's mass (in kilograms):\n";
            cin >> mass;
            cin.clear();

            weight = mass * Accel;

            if (weight > 1000)
            {
                cout << "The object weighs ";
                cout << weight;
                cout << " newtons. The object is too heavy!\n";
            }
            else if (weight < 10)
            {
                cout << "The object weighs ";
                cout << weight;
                cout << " newtons. The object is too light!\n";
            }
            else if ((weight <= 1000) && (weight >= 10))
            {
                cout << "The object weighs ";
                cout << weight;
                cout << " newtons.\n";
            }
            else
            {
                cout << "Invalid input.\n";
            }
        }
        else if (choice == 3)
        {
            const float Sec_per_min = 60;
            const float Min_per_hr = 60;
            const float Hr_per_day = 24;
            float seconds, minutes, hours, days;

            days = 0;
            hours = 0;
            minutes = 0;

            cout << "Hit Enter after input.\n";
            cout << "Enter the number of seconds:\n";
            cin >> seconds;
            cin.clear();

            if (seconds >= (Sec_per_min * Min_per_hr * Hr_per_day))
            {
                days = seconds / (Sec_per_min * Min_per_hr * Hr_per_day);
                cout << "There are ";
                cout << seconds;
                cout << " seconds in ";
                cout << days;
                cout << " day(s).\n";
            }
            else if (seconds >= (Sec_per_min * Min_per_hr))
            {
                hours = seconds / (Sec_per_min * Min_per_hr);
                cout << "There are ";
                cout << seconds;
                cout << " seconds in ";
                cout << hours;
                cout << " hour(s).\n";
            }
            else if (seconds >= Sec_per_min)
            {
                minutes = seconds / Sec_per_min;
                cout << "There are ";
                cout << seconds;
                cout << " seconds in ";
                cout << minutes;
                cout << " minute(s).\n";
            }
            else if (seconds < Sec_per_min)
            {
                cout << seconds;
                cout << " second(s) is less than a minute!\n";
            }
            else
            {
                cout << "Invalid input.\n";
            }
        }
        else if (choice == 2)
        {
            int random1, random2, sum, answer;
    
            random1 = 0;
            random2 = 0;

            random1 = rand() % 50 + 1;
            random2 = rand() % 50 + 1;
            sum = random1 + random2;

            cout << "Hit Enter after answering.\n";
            cout << "   ";
            cout << random1;
            cout << "\n";
            cout << " + ";
            cout << random2;
            cout << "\n";
            cout << "  ____\n";
            cout << "   ";
            cin >> answer;
            cin.clear();

            if (answer == sum)
            {
                cout << "Correct! ";
                cout << sum;
                cout << " is the correct answer!\n";
            }
            else if (answer != sum)
            {
                cout << "Incorrect. ";
                cout << sum;
                cout << " is the correct answer.\n";
            }
            else
            {
                cout << "Invalid input.\n";
            }
        }
        else if (choice == 1)
        {
            const float Package = 99;
            const float Level1 = .2;
            const float Level2 = .3;
            const float Level3 = .4;
            const float Level4 = .5;
            int quantity;
            float price;

            quantity = 0;

            cout << "Hit Enter after input.\n";
            cout << "Enter the units purchased:\n";
            cin >> quantity;
            cin.clear();

            price = 0;

            if (quantity >= 100)
            {
                price = (quantity * Package) - (quantity * Package * Level4);
                cout << "Your total price for ";
                cout << quantity;
                cout << " units is $";
                cout << price;
                cout << "\n";
            }
            else if ((quantity >= 50)&&(quantity < 100))
            {
                price = (quantity * Package) - (quantity * Package * Level3);
                cout << "Your total price for ";
                cout << quantity;
                cout << " units is $";
                cout << price;
                cout << "\n";
            }
            else if ((quantity >= 20)&&(quantity < 50))
            {
                price = (quantity * Package) - (quantity * Package * Level2);
                cout << "Your total price for ";
                cout << quantity;
                cout << " units is $";
                cout << price;
                cout << "\n";
            }
            else if ((quantity >= 10)&&(quantity < 20))
            {
                price = (quantity * Package) - (quantity * Package * Level1);
                cout << "Your total price for ";
                cout << quantity;
                cout << " units is $";
                cout << price;
                cout << "\n";
            }
            else if (quantity < 10)
            {
                price = quantity * Package;
                cout << "Your total price for ";
                cout << quantity;
                cout << " units is $";
                cout << price;
                cout << "\n";
            }
            else if (quantity <= 0)
            {
                cout << "Must enter a number larger than zero!\n";
            }
            else
            {
                cout << "Invalid input.\n";
            }
        }
        else
        {
            cout << "Invalid input.\n";
        }
        
        cout << "Would you like to go back to the main menu? ";
        cout << "(Y or N) (Press Enter)\n";
        cin >> repeat;
    }
//Exit Stage Right!    
    return 0;
}