/*
 * File: main.cpp
 * Author: John Decker
 * Purpose: Project 1
 * Created on July 16, 2014, 1:35 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
int getRandom(int m, int n); //Function to get a random number based on s, i, j. 
void showBoard(int square); //Display the type of the square (Mine or no mine).

//Execution begins here
int main()
{
    bool repeat;
    repeat = 1;
    while (repeat == 1)
    {
        cout << "Welcome to Minesweeper!" << endl << endl;
        int s = 0;
        while(s < 2 || s > 10)
        {
            cout << "Enter number of squares per side (2 - 10):" << endl;
            cin >> s;
            cin.clear();
        }
        int minefield[s][s]; //2D array. 0 through 8 are # of adjacent mines, 9 is a mine.
        int show[s][s]; //2D array. Square shown by dimensions s.
        int mines = 0; //Number of mines.
        int count;
        int i = 0;                   
        int j = 0;
        int x = 0; //X coordinate.
        int y = 0; //Y coordinate.
        bool end = 0;
        while(mines < 1 || mines > ((s*s)-1))
        {
            cout << "Enter the number of mines (1 - " << ((s*s)-1) << "):" << endl;
            cin >> mines;
            cin.clear();
        }
        // Create the minefield:
        for(i = 0; i < s ;i++)
        {
            for(j = 0; j < s ;j++)
            {
                minefield[i][j] = 0;
            }
        }
        i = getRandom(i, s);
        j = getRandom(j, s);
        cout << "Generating minefield..." << endl;
        while(mines > 0)
        {
            i = i + 1;
            j = j + 2;
            x = getRandom(i, s);
            y = getRandom(j, s);
            if(minefield[y][x] != 9)
            {
                minefield[y][x] = 9;
                mines--;
                if((y-1) >= 0) //Count mines to bottom.
                {
                    if(minefield[y-1][x] != 9)
                    {
                        minefield[y-1][x]++;
                    }
                }
                if((x-1) >= 0) //Count mines to left.
                {
                    if(minefield[y][x-1] != 9)
                    {
                        minefield[y][x-1]++;
                    }
                }
                if((y+1) < s) //Count mines to top.
                {
                    if(minefield[y+1][x] != 9)
                    {
                        minefield[y+1][x]++;
                    }
                }
                if((x+1) < s) //Count mines to right.
                {
                    if(minefield[y][x+1] != 9)
                    {
                        minefield[y][x+1]++;
                    }
                }
                if(((y-1) >= 0) && ((x-1) >= 0)) //Count mines to bottom-left.
                {
                    if(minefield[y-1][x-1] != 9)
                    {
                        minefield[y-1][x-1]++;
                    }
                }
                if(((y-1) >= 0) && ((x+1) < s)) //Count mines to bottom-right.
                {
                    if(minefield[y-1][x+1] != 9)
                    {
                        minefield[y-1][x+1]++;
                    }
                }
                if(((y+1) < s) && ((x-1) >= 0)) //Count mines to top-left.
                {
                    if(minefield[y+1][x-1] != 9)
                    {
                        minefield[y+1][x-1]++;
                    }
                }
                if((y+1) < s && (x+1) < s) //Count mines to top-right.
                {
                    if(minefield[y+1][x+1] != 9)
                    {
                        minefield[y+1][x+1]++;
                    }
                }
            }
        };
        for(i = 0; i < s; i++)
        {
            for(j = 0; j < s ;j++)
            {
                show[i][j]=0;
            }
        }
        //Prompt for X and Y then check squares loop:
        while(end == 0)
        {
            system("clear");
            count = 0;
            mines = 0;
            cout << "   ";
            for(i = 0 ; i < s; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            for(i = 0; i < s ;i++) //Loop to display the board.
            {
                for(j = 0; j < s; j++)
                {
                    if(j == 0)
                    {
                        cout << i << " |";
                    }
                    if(show[i][j] == 1)
                    {
                        showBoard(minefield[i][j]);
                    }
                    else
                    {
                        cout << "_|";
                    }
                    if(j == (s-1))
                    {
                        cout << endl;
                    }
                    if((minefield[i][j] != 9) && (show[i][j] == 1))
                    {
                        count++;
                    }
                    if(minefield[i][j] == 9)
                    {
                        mines++;
                    }
                }
            }
            if(count >= ((s*s) - mines)) //Mines cleared successfully.
            {
                cout << "You win!" << endl;
                end = 1;
            }
            if(end == 0) //Prompt for X and Y coordinates.
            {
                cout << "X coordinate: ";
                cin >> x;
                cin.clear();
                cout << "Y coordinate: ";
                cin >> y;
                cin.clear();
            }
            if(minefield[y][x] == 9) //Mine hit.
            {
                system("clear");
                cout << "   ";
                for(i = 0; i < s; i++)
                {
                    cout << i << " ";
                }
                cout << endl;
                end = 1;
                for(i = 0; i < s; i++)
                {
                    for(j = 0; j < s; j++)
                    {
                        if(j == 0)
                        {
                            cout << i << " |";
                        }
                        if(minefield[i][j] == 9)
                        {
                            show[i][j] = 1;
                        }
                        if(show[i][j] == 1)
                        {
                            showBoard(minefield[i][j]);
                        }
                        else
                        {
                            cout << "_|";
                        }
                        if(j == (s-1))
                        {
                            cout << endl;
                        }
                    }
                }
            cout << "BOOM! Game over!" << endl;
            }
            if(minefield[y][x] == 0) //No adjacent mines.
            {
                show[y][x] = 1;
                for(i = 0; i < s; i++)
                {
                    for(j = 0; j < s; j++)
                    {
                        if((i > (y-2)) && (i<(y+2)))
                        {
                            if((j > (x-2)) && (j < (x+2)))
                            {
                                if(minefield[i][j] != 9)
                                {
                                    show[i][j] = 1;
                                }
                            }
                        }
                    }
                }
            }
            if((minefield[y][x] > 0) && (minefield[y][x] < 9)) //Mine adjacent but not hit.
            {
                show[y][x] = 1;
            }
        }
        if (end == 1) //Prompt for new game.
        {
            char choice;
            cout << "Would you like to play again? (Y or N) (Press Enter)\n";
            cin >> choice;
            cin.clear();
            system("clear");
            switch(choice)
            {
                case 'Y':
                {
                    repeat = 1;
                    break;
                }
                case 'y':
                {
                    repeat = 1;
                    break;
                }
                case 'N':
                {
                    repeat = 0;
                    break;
                }
                case 'n':
                {
                    repeat = 0;
                    break;
                }
                default:
                {
                    repeat = 0;
                    break;
                }
            }
        }
    }
    return 0;
}

void showBoard(int square)
{
    if(square == 0)
    {
        cout << "#|"; //Square not adjacent to mine.
    }
    else if(square == 9)
    {
        cout << "x|"; //Mine.
    }
    else
    {
        cout << square << "|"; //Display amount of mines adjacent.
    }
}

int getRandom(int m, int n)
{
    int random;
    srand(static_cast<unsigned int>(time(0))); //Seed random number.
    random = rand();
    random = random / (random * m) + (1621 * m); //Relate random number to m.
    random = random % n; //Relate random number to n.
    return random;
}