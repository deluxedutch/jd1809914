/*
 * File: main.cpp
 * Author: John Decker
 * Purpose: Assignment 5
 * Created on July 23, 2014, 9:04 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
void calculateRetail(float, float);
float celsius(float);
float fallingDistance(float);
float kineticEnergy(float, float);
float getSales (string);
void findHighestFive (float, float, float, float);
int getNumAccidents (string);
void findLowestSix (int, int, int, int, int);
float getScore (string);
float findLowestSeven (float, float, float, float, float);
void calcAverage (float, float, float, float, float, float);
float getJudgeData (string);
float findLowest (float, float, float, float, float);
float findHighest (float, float, float, float, float);
void calcScore (float, float, float, float, float, float, float);
float calcProfit (float, float, float, float, float);

//Execution begins here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN = getN();
        switch(inN){
            case 1: problem1();break;
            case 2: problem2();break;
            case 3: problem3();break;
            case 4: problem4();break;
            case 5: problem5();break;
            case 6: problem6();break;
            case 7: problem7();break;
            case 8: problem8();break;
            case 9: problem9();break;
            case 10: problem10();break;
            default:;
        };
    }while(inN<11);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"\n";
    cout<<"Type 1 for Gaddis 7th Edition, Chapter 6, Problem 1."<<endl;
    cout<<"Type 2 for Gaddis 7th Edition, Chapter 6, Problem 2."<<endl;
    cout<<"Type 3 for Gaddis 7th Edition, Chapter 6, Problem 3."<<endl;
    cout<<"Type 4 for Gaddis 7th Edition, Chapter 6, Problem 4."<<endl;
    cout<<"Type 5 for Gaddis 7th Edition, Chapter 6, Problem 5."<<endl;
    cout<<"Type 6 for Gaddis 7th Edition, Chapter 6, Problem 6."<<endl;
    cout<<"Type 7 for Gaddis 7th Edition, Chapter 6, Problem 7."<<endl;
    cout<<"Type 8 for Gaddis 7th Edition, Chapter 6, Problem 8."<<endl;
    cout<<"Type 9 for Gaddis 7th Edition, Chapter 6, Problem 11."<<endl;
    cout<<"Type 10 for Gaddis 7th Edition, Chapter 6, Problem 12."<<endl;
    cout<<"Type 11 to exit.\n"<<endl;
}

//Choose problem number function
int getN(){
        int inN;
        cin >> inN;
        return inN;
}

//Solution to problem 1
void problem1(){
    float wholesale = -1;
    float markup = -1;
    while (wholesale < 0)
    {
        cout << "Press return after input.\n";
        cout << "Enter the wholesale price of the item (in dollars).\n";
        cin >> wholesale;
        cin.clear();
        if (wholesale < 0)
        {
            cout << "Input must be non-negative.\n";
        }
    }
    while (markup < 0)
    {
    cout << "Enter the markup (as percentage).\n";
    cin >> markup;
    cin.clear();
    if (markup < 0)
        {
            cout << "Input must be non-negative.\n";
        }
    }
    markup = markup / 100.0; //Convert percent to decimal.
    calculateRetail(wholesale, markup);
}
void calculateRetail(float wholesale = 0.0, float markup = 0.0){
    float price = 0.0;
    price = wholesale + (wholesale * markup); //Calculate retail price.
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The retail price of the item is $" <<price<< ".\n";
    cout.unsetf(ios_base::floatfield);
}
//Solution to problem 2
void problem2(){
    float tempc = 0.0;
    float tempf = 0.0;
    cout << " Fahrenheit\tCelsius\n";
    cout << " -----------------------------------------------\n";
    for(tempf = 0; tempf <= 20; tempf++)
    {
        tempc = celsius(tempf);
        cout << " ";
        cout << tempf;
        cout << "\t\t";
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << tempc;
        cout.unsetf(ios_base::floatfield);
        cout << "\n";
    }
}

float celsius(float tempf = 0.0){
    float tempc = 0.0;
    const float Fiveninths = (5.0 / 9.0);
    tempc = Fiveninths * (tempf - 32.0); //Convert F to C.
    return tempc;
}
//Solution to problem 3
void problem3(){
    float meters = 0.0;
    float time = 0.0;
    cout << " Time (s)\tMeters\n";
    cout << " -----------------------------------------------\n";
    for(time = 1; time <= 10; time++)
    {
        meters = fallingDistance(time);
        cout << " ";
        cout << time;
        cout << "\t\t";
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << meters;
        cout.unsetf(ios_base::floatfield);
        cout << "\n";
    }
}

float fallingDistance(float time = 0.0)
{
    float meters = 0.0;
    meters = 0.5 * (9.8 * time * time); //Calculate distance in freefall.
    return meters;
}
//Solution to problem 4
void problem4(){
    float kinetic = 0.0;
    float mass = 0.0;
    float velocity = 0.0;
  
    cout << "Press return after input.\n";
    cout << "Enter the object's mass (in kilograms).\n";
    cin >> mass;
    cin.clear();
    cout << "Enter the object's velocity (in meters per second).\n";
    cin >> velocity;
    cin.clear();
   
    kinetic = kineticEnergy(mass, velocity);
    cout << "The kinetic energy of the object is " <<kinetic<< " Joules.\n";
}

float kineticEnergy(float mass = 0.0, float velocity = 0.0)
{
    float kinetic = 0.0;
    kinetic = 0.5 * (mass * velocity * velocity); //Calculate kinetic energy.
    return kinetic;    
}
//Solution to problem 5
void problem5(){
    string northeast = "Northeast";
    string southeast = "Southeast";
    string northwest = "Northwest";
    string southwest = "Southwest";
    float northeastS = 0;
    float southeastS = 0;
    float northwestS = 0;
    float southwestS = 0;
    
    northeastS = getSales(northeast);
    southeastS = getSales(southeast);
    northwestS = getSales(northwest);
    southwestS = getSales(southwest);
    
    findHighestFive(northeastS, southeastS, northwestS, southwestS);
}

float getSales (string division = "")
{
    float num = -1;
    while (num < 0)
    {
        cout << "Enter "<<division<<" sales: $";
        cin >> num;
        cin.clear();
        if (num < 0)
        {
            cout << "Input must be non-negative.\n";
        }
    }
    return num;
}

void findHighestFive (float ne = 0.0, float se = 0.0, float nw = 0.0, float sw = 0.0) 
{
    //Calculate maximum.
    const char *who = "Northeast";
    float high = ne;
    if(se > high)
    {
        who = "Southeast";
        high = se;
    }
    if(nw > high)
    {
        who = "Northwest";
        high = nw;
    }
    if(sw > high)
    {
        who = "Southwest";
        high = sw;
    }
    cout.setf(ios::fixed);
    cout.precision(2);    
    cout << who << " has the highest sales ($" << high << ")" << endl;
    cout.unsetf(ios_base::floatfield);
    cout << endl;
}
//Solution to problem 6
void problem6(){
    string north = "North";
    string south = "South";
    string east = "East";
    string west = "West";
    string cent = "Central";
    int northA = 0;
    int southA = 0;
    int eastA = 0;
    int westA = 0;
    int centA = 0;
    
    northA = getNumAccidents(north);
    southA = getNumAccidents(south);
    eastA = getNumAccidents(east);
    westA = getNumAccidents(west);
    centA = getNumAccidents(cent);
    
    findLowestSix(northA, southA, eastA, westA, centA);
}

int getNumAccidents (string division = "")
{
    int num = -1;
    while (num < 0)
    {
        cout << "Enter "<<division<<"'s number of accidents.\n";
        cin >> num;
        cin.clear();
        if (num < 0)
        {
            cout << "Input must be non-negative.\n";
        }
    }
    return num;
}

void findLowestSix (int nor = 0, int sou = 0, int est = 0, int wst = 0, int cen = 0) 
{
    //Calculate minimum.
    const char *who = "North";
    int low = nor;
    if(sou < low)
    {
        who = "South";
        low = sou;
    }
    if(est < low)
    {
        who = "East";
        low = est;
    }
    if(wst < low)
    {
        who = "West";
        low = wst;
    }
    if(cen < low)
    {
        who = "Central";
        low = cen;
    }
    cout << who << " had the lowest amount of accidents (" << low << ")" << endl;
    cout << endl;
}

void problem7(){
    string first = "first";
    string second = "second";
    string third = "third";
    string fourth = "fourth";
    string fifth = "fifth";
    float firstA = 0;
    float secondA = 0;
    float thirdA = 0;
    float fourthA = 0;
    float fifthA = 0;
    float low = 0;
    
    firstA = getScore(first);
    secondA = getScore(second);
    thirdA = getScore(third);
    fourthA = getScore(fourth);
    fifthA = getScore(fifth);
    
    low = findLowestSeven(firstA, secondA, thirdA, fourthA, fifthA);
    
    calcAverage(firstA, secondA, thirdA, fourthA, fifthA, low);
}

float getScore (string test = "")
{
    float num = -1;
    while ((num < 0) || (num > 100))
    {
        cout << "Enter the "<<test<<" test score.\n";
        cin >> num;
        cin.clear();
        if ((num < 0) || (num > 100))
        {
            cout << "Input must be between 0 and 100.\n";
        }
    }
    return num;
}

float findLowestSeven (float first = 0.0, float second = 0.0, 
        float third = 0.0, float fourth = 0.0, float fifth = 0.0) 
{
    //Calculate lowest score.
    float low = first;
    if(second < low)
    {
        low = second;
    }
    if(third < low)
    {
        low = third;
    }
    if(fourth < low)
    {
        low = fourth;
    }
    if(fifth < low)
    {
        low = fifth;
    }
    return low;
}

void calcAverage(float first = 0.0, float second = 0.0, float third = 0.0,
        float fourth = 0.0, float fifth = 0.0, float low = 0.0)
{
    //Calculate average of top four scores.
    float average = 0.0;
    average = ((first + second + third + fourth + fifth - low) / 4);
    cout << "The average of the four highest scores is "<< average << ".\n";    
}

void problem8(){
    string first = "first";
    string second = "second";
    string third = "third";
    string fourth = "fourth";
    string fifth = "fifth";
    float firstA = 0;
    float secondA = 0;
    float thirdA = 0;
    float fourthA = 0;
    float fifthA = 0;
    float low = 0;
    float high = 0;
    
    firstA = getJudgeData(first);
    secondA = getJudgeData(second);
    thirdA = getJudgeData(third);
    fourthA = getJudgeData(fourth);
    fifthA = getJudgeData(fifth);
    
    low = findLowest(firstA, secondA, thirdA, fourthA, fifthA);
    high = findHighest(firstA, secondA, thirdA, fourthA, fifthA);
    
    calcScore(firstA, secondA, thirdA, fourthA, fifthA, low, high);
}
float getJudgeData (string test = "")
{
    float num = -1;
    while ((num < 0) || (num > 10))
    {
        cout << "Enter the "<<test<<" judge's score.\n";
        cin >> num;
        cin.clear();
        if ((num < 0) || (num > 10))
        {
            cout << "Input must be between 0 and 10.\n";
        }
    }
    return num;
}
float findLowest (float first = 0.0, float second = 0.0, float third = 0.0, 
        float fourth = 0.0, float fifth = 0.0) 
{
    //Calculate minimum score.
    float low = first;
    if(second < low)
    {
        low = second;
    }
    if(third < low)
    {
        low = third;
    }
    if(fourth < low)
    {
        low = fourth;
    }
    if(fifth < low)
    {
        low = fifth;
    }
    return low;
}
float findHighest (float first = 0.0, float second = 0.0, float third = 0.0, 
        float fourth = 0.0, float fifth = 0.0) 
{
    //Calculate maximum score.
    float high = first;
    if(second > high)
    {
        high = second;
    }
    if(third > high)
    {
        high = third;
    }
    if(fourth > high)
    {
        high = fourth;
    }
    if(fifth > high)
    {
        high = fifth;
    }
    return high;
}
void calcScore(float first = 0.0, float second = 0.0, float third = 0.0, 
        float fourth = 0.0, float fifth = 0.0, float low = 0.0, float high = 0.0)
{
    //Calculate average of middle three scores.
    float average = 0.0;
    average = ((first + second + third + fourth + fifth - low - high) / 3);
    cout << "The average of the three middle scores is "<< average << ".\n";    
}
void problem9(){
    float ns = -1.0;
    float sp = -1.0;
    float sc = -1.0;
    float pp = -1.0;
    float pc = -1.0;
    float profit = 0;
    
    while (ns < 0)
    {
        cout << "Enter the number of shares (NS).\n";
        cin >> ns;
        cin.clear();
        if (ns < 0 )
        {
            cout << "Input must be non-negative.\n";
        }
    }
    while (sp < 0)
    {
        cout << "Enter the sale price per share (SP).\n";
        cin >> sp;
        cin.clear();
        if (sp < 0 )
        {
            cout << "Input must be non-negative.\n";
        }
    }
    while (sc < 0)
    {
        cout << "Enter the sale commission paid (SC).\n";
        cin >> sc;
        cin.clear();
        if (sc < 0 )
        {
            cout << "Input must be non-negative.\n";
        }
    }
    while (pp < 0)
    {
        cout << "Enter the purchase price per share (PP).\n";
        cin >> pp;
        cin.clear();
        if (pp < 0 )
        {
            cout << "Input must be non-negative.\n";
        }
    }
    while (pc < 0)
    {
        cout << "Enter the purchase commision paid (PC).\n";
        cin >> pc;
        cin.clear();
        if (pc < 0 )
        {
            cout << "Input must be non-negative.\n";
        }
    }
    
    profit =  calcProfit(ns, sp, sc, pp, pc);
    
    if (profit > 0)
    {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "You made a profit of $" << profit << ".\n";
        cout.unsetf(ios_base::floatfield);
    }
    if (profit == 0)
    {
        cout << "You broke even.\n";
    }
    if (profit < 0)
    {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "You posted a loss of $" << profit * -1 << ".\n";
        cout.unsetf(ios_base::floatfield);
    }
}
void problem10(){
    int num = 0;
    float total = 0;
    while ((num < 1) || (num > 10))
        {
            cout << "Enter the number of stocks sales you wish to calculate.\n";
            cin >> num;
            cin.clear();
            if ((num < 1) || (num > 10))
            {
                cout << "Input must be between 1 and 10.\n";
            }
        }
    for(int i=1; i<=num; i++) //Loop to calculate multiple stock trades.
    {
        float ns = -1.0;
        float sp = -1.0;
        float sc = -1.0;
        float pp = -1.0;
        float pc = -1.0;
        float profit = 0;

        while (ns < 0)
        {
            cout << "Enter the number of shares (NS) of stock number "<<i<<".\n";
            cin >> ns;
            cin.clear();
            if (ns < 0 )
            {
                cout << "Input must be non-negative.\n";
            }
        }
        while (sp < 0)
        {
            cout << "Enter the sale price per share (SP) of stock number "<<i<<".\n";
            cin >> sp;
            cin.clear();
            if (sp < 0 )
            {
                cout << "Input must be non-negative.\n";
            }
        }
        while (sc < 0)
        {
            cout << "Enter the sale commission paid (SC) of stock number "<<i<<".\n";
            cin >> sc;
            cin.clear();
            if (sc < 0 )
            {
                cout << "Input must be non-negative.\n";
            }
        }
        while (pp < 0)
        {
            cout << "Enter the purchase price per share (PP) of stock number "<<i<<".\n";
            cin >> pp;
            cin.clear();
            if (pp < 0 )
            {
                cout << "Input must be non-negative.\n";
            }
        }
        while (pc < 0)
        {
            cout << "Enter the purchase commision paid (PC) of stock number "<<i<<".\n";
            cin >> pc;
            cin.clear();
            if (pc < 0 )
            {
                cout << "Input must be non-negative.\n";
            }
        }

        profit =  calcProfit(ns, sp, sc, pp, pc);
        total = total + profit;
    }
    
    if (total > 0)
    {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "You made a profit of $" << total << ".\n";
        cout.unsetf(ios_base::floatfield);
    }
    if (total == 0)
    {
        cout << "You broke even.\n";
    }
    if (total < 0)
    {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "You posted a loss of $" << total * -1 << ".\n";
        cout.unsetf(ios_base::floatfield);
    }
}
float calcProfit (float ns = 0.0, float sp = 0.0, float sc = 0.0, 
        float pp = 0.0, float pc = 0.0)
{
    //Calculate profit on a single stock trade.
    float profit = 0;
    profit = ((ns * sp) - (ns * pp) - sc - pc);
    return profit;
}
//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}