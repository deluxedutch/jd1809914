/*
 * File: main.cpp
 * Author: John Decker
 * Purpose: Assignment 6
 * Created on July 23, 2014, 9:04 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//Global Constants
const int MONKEYS = 3;
const int DAYS = 7;
const int LotteryDigits = 10;
const int SIZE = 5;

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
int countPerfect(int);
int getTotal(int [], int);
int findSmallest(int [], int);
int findLargest(int [], int);
float familyAverage(const float mf[MONKEYS][DAYS]);
float smallMeal(const float mf[MONKEYS][DAYS]);
float bigMeal(const float mf[MONKEYS][DAYS]);
int generateLottery(int[], int, int);
int userInput(int[], int);
int matchCounter(int[], int[], int);
void displayNumbers(int[], int[]);
void winnerOrLoser(int);
void tableFormat1(string,string,string,string);
void tableFormat2(double,double,double,double);
int searchList(int [], int, int);
int binarySearch(int [], int, int);

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
    cout<<"Type 1 for Gaddis 7th Edition, Chapter 8, Problem 1."<<endl;
    cout<<"Type 2 for Gaddis 7th Edition, Chapter 8, Problem 2."<<endl;
    cout<<"Type 3 for Gaddis 7th Edition, Chapter 8, Problem 3."<<endl;
    cout<<"Type 4 for Gaddis 7th Edition, Chapter 8, Problem 4."<<endl;
    cout<<"Type 5 for Gaddis 7th Edition, Chapter 8, Problem 5."<<endl;
    cout<<"Type 6 for Gaddis 7th Edition, Chapter 8, Problem 6."<<endl;
    cout<<"Type 7 for Gaddis 7th Edition, Chapter 8, Problem 7."<<endl;
    cout<<"Type 8 for Gaddis 7th Edition, Chapter 6, Problem 1."<<endl;
    cout<<"Type 9 for Gaddis 7th Edition, Chapter 6, Problem 2."<<endl;
    cout<<"Type 10 for Gaddis 7th Edition, Chapter 6, Problem 3."<<endl;
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
    int tests[10];
    int count, grade, i, perfect = 0;

    cout<<"Please enter the 10 grades."<<endl;

    for(count=0; count < 10;count++)
    {
            cout<<"Enter grade for test #"<<count+1<<": ";
            cin>>grade;
            while((grade < 0) || (grade > 100))
            {
                    cout << "Please enter a number between 0 - 100: "<<endl;
                    cin >> grade;
            }
            tests[count] = grade;
    }
    for ( i=0;i<10;i++)
    {
            cout << "Grade " << i+1 << " = " << tests[i] << " %" << endl;
            perfect += countPerfect(tests[i]);
    }
    cout << "There were " << perfect << " perfect scores" << endl;
}

int countPerfect(int grade)
{
    if (grade==100)
            return 1;
    else
            return 0;
}
//Solution to problem 2
void problem2(){
    const int Length = 21; // Size of the the array.
    const int End = 0; // Sentinel number.

    int num = 1; // Variable to store user input.

    // Roman numerals stored in an array
    string roman[Length] = {"", "I", "II", "III", "IV", "V", "VI", "VII",
        "VIII", "IX", "X", "XI", "XII", "XIII", "XIV", "XV", "XVI", "XVII",
        "XIII", "XIX", "XX"};

        do {
            cout << "Please enter a number between 1 and " << Length - 1 << " (Enter 0 to stop): ";
            if (!(cin >> num)) {
                cout << "Entry is not a number" << endl;
                cin.clear();
                cin.ignore(100, '\n');
            } else 
            if (num > 0 && num < Length)
                cout << num << " is equivalent to " << roman[num] << endl;   
            else 
            if (num != End)
                cout << "Invalid number\n";

        } while (num != End);
}
//Solution to problem 3
void problem3(){
    const int NTypes = 5;   
    int sales[NTypes];
    string name[NTypes] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};

    // Create the arrays for the names and sales amounts
    int totalJarsSold, hiSalesProduct, loSalesProduct;

    // Input the number of jars sold
    for (int type = 0; type < NTypes; type++)
    {
        cout << "Jars sold last month of " << name[type] << ": ";
        cin  >> sales[type];
        while (sales[type] < 0)
        {	cout << "Jars sold must be 0 or more.  Please re-enter: ";
           cin  >> sales[type];
        }
    }
   
    // Call functions to get total sales and high and low selling products
    totalJarsSold  = getTotal(sales, NTypes);

    loSalesProduct = findSmallest(sales, NTypes);

    hiSalesProduct = findLargest(sales, NTypes);

    // Produce the sales report
    cout << endl << endl;
    cout << "     Salsa Sales Report \n\n";
    cout << "Name              Jars Sold \n";
    cout << "____________________________\n";
 
    for (int i = 0; i <= 4; i++)
        cout << name[i] << "\t\t\t" << sales[i] << "\n";

    cout << "\nTotal Sales:" << setw(15) << totalJarsSold << endl;
    cout << "High Seller: "  << name[hiSalesProduct] << endl;
    cout << "Low Seller : " << name[loSalesProduct] << endl;
}

int getTotal (int array[], int elements)
{
    int total = 0;

    for (int type = 0; type < elements; type++)
        total += array[type];
    return total;
}

int findLargest(int array[], int elements)
{
    int indexOfLargest = 0;

    for (int pos = 1; pos < elements; pos++)
    {
        if (array[pos] > array[indexOfLargest])
            indexOfLargest = pos;
    }
    return indexOfLargest;
}

int findSmallest(int array[], int elements)
{
    int indexOfSmallest = 0;

    for (int pos = 1; pos < elements; pos++)
    {
        if (array[pos] < array[indexOfSmallest])
            indexOfSmallest = pos;
    }		
    return indexOfSmallest;
}
//Solution to problem 4
void problem4(){
    
    float mnkyArray [MONKEYS][DAYS]={0};
    int x, y;     

    for (x = 0; x < MONKEYS; x++)
    {
      for (y = 0; y < DAYS; y++)
      {
        do
        {   
            cout << " Enter the number of pounds eaten for";    
            cout << " Monkey # " << x+1 << " ";
            cout << " Day " << y+1 << ": ";
            cin >> mnkyArray [x][y];

            if(mnkyArray [x][y] < 0)
                cout << "Please enter a non-negative number "
                        "for pounds of food." << endl;

         }
         while(mnkyArray [x][y] < 0);

      }
      cout << endl;

    }

    cout << endl;
    cout << "The average amount of food eaten per day" << endl;
    cout << "by the whole family of monkeys ";
    cout << "is " << familyAverage(mnkyArray)<< " lbs." << endl;
    cout << endl;

    cout << "The minimum amount of food eaten during" << endl;
    cout << "the week by any one monkey is " << smallMeal(mnkyArray)
            << " lbs." << endl;
    cout << endl;

    cout << "The most amount of food eaten during the" << endl;
    cout << "week by any one monkey is " << bigMeal(mnkyArray) <<
            " lbs." << endl;
    cout << endl;
    
}

float familyAverage(const float mf[MONKEYS][DAYS])
{
    float total = 0;

    for (int x = 0; x < MONKEYS; x++)
        for (int y = 0; y < DAYS; y++)
            total += mf[x][y];
        total= (total / DAYS) / 3;

    return total;
}

float smallMeal(const float mf[MONKEYS][DAYS])
{
    float small = 1000000000;

    for (int x = 0; x < MONKEYS; x++)
        for (int y = 0; y < DAYS; y++)
            if (mf[x][y] < small)
                small = mf[x][y];

    return small;
}

float bigMeal(const float mf[MONKEYS][DAYS])
{
    float big= 0;

    for (int x = 0; x < MONKEYS; x++)
        for (int y = 0; y < DAYS; y++)
            if (mf[x][y] > big)
                big = mf[x][y];

    return big;
}
//Solution to problem 5
void problem5(){
    const int NUM_MONTHS = 3;
    const int NUM_DAYS = 30;
    const int NUM_TYPES= 3;
    char forecast[NUM_MONTHS][NUM_DAYS];
    int counts [NUM_MONTHS][NUM_TYPES];
    int rainyDays = 0;
    ifstream datafile;
    datafile.open("RainOrShine.txt");
    if (!datafile)
    cout << "Error opening data file.\n";
    else
    {
        // Read data and load arrary
            for(int month = 0; month < NUM_MONTHS; month++)
            {
                for(int day = 0; day < NUM_DAYS; day++)
                {
                    datafile >> forecast[month][day];
                }
            datafile.ignore();
            }
            for(int month = 0; month < NUM_MONTHS; month++)
            {
                for(int day = 0; day < NUM_DAYS; day++)
                {
                    cout << forecast[month][day];
                }
            cout << endl;
            }
        // intialize counts arrarys to 0
        for(int month = 0; month < NUM_MONTHS; month++)
        {
            for(int type = 0; type < NUM_TYPES; type++)
            {
                counts[month][type] =0;
            }
        }
        // count all data
            cout << "Data:" << endl;
        for(int month = 0; month < NUM_MONTHS; month++)
        {
            for(int day = 0; day < NUM_DAYS; day++)
            {
                if(forecast [month][day] =='R')
                {
                counts[month][0]++;
                }
                if(forecast [month][day] =='S')
                {
                counts[month][1]++;
                }
                if(forecast [month][day] =='C')
                {
                counts[month][2]++;
                }
            }
        }
            cout << "\tR\tS\tC\n";
        for(int month = 0; month < NUM_MONTHS; month++)
        {
        cout << "Month " << month + 1 << "\t";
            for(int type = 0; type < NUM_TYPES; type++)
            {
                cout << counts[month][type] << '\t';
            }
        cout << endl;
        }
        // Determine month with largest number of rainy days
        // output report
        cout << "Three-Month Analysis:\n";
        rainyDays = counts[0][0];
        if (counts[1][0] > rainyDays)
            cout << "July was rainiest.";
        if (counts[2][0] > rainyDays)
            cout << "August was rainiest.";
        else
            cout << "June was rainiest.";
    }
}
//Solution to problem 6
void problem6(){
    // Variable Declarations
	int lottery[5] = {0, 0, 0, 0, 0};
	int user[5] = {0, 0, 0, 0, 0};
	int matches = 0;
        
        srand(static_cast<unsigned int>(time(0)));

	//Function Calls
	generateLottery(lottery, SIZE, LotteryDigits);

	userInput(user, SIZE);

	matches = matchCounter(lottery, user, matches);

	displayNumbers(lottery, user);

	winnerOrLoser(matches);
        
}

// Randomly generates winning lottery numbers
int generateLottery(int lottery[], int, int)
{
	for (int y=0; y<SIZE; y++)
	{
		lottery[y] = rand() % LotteryDigits;
	}
	
	return lottery[0], lottery[1], lottery[2], lottery[3], lottery[4];
}

// Reads user lottery number choices
int userInput(int user[], int)
{	
	cout << "This program will simulate a lottery.\n\n";

	for (int y=0; y<SIZE; y++)
	{
		cout << "Enter a digit between 0 and 9: ";
		cin >> user[y];

		while (user[y]<0 || user[y]>9)
		{
		cout << "Error! Entry must be between 0 and 9: ";
		cin >> user[y];
		}
	}

	return user[0], user[1], user[2], user[3], user[4];
}

// Counts the number of matches
int matchCounter(int lotto[], int input[], int)
{
	int match = 0;

	for (int x = 0; x < SIZE; ++x)
	{
		if (lotto[x] == input[x])
			match = match + 1;
	}

	return match;
}

// Diplays the winning numbers and the user's numbers
void displayNumbers(int lottery[], int user[])
{
	cout << "\nThe winning lottery numbers are: " << lottery[0] << " "
                << lottery[1] << " " << lottery[2] << " " << lottery[3]
                << " " << lottery[4] << endl;
	cout << "Your lottery numbers are: " << user[0] << " " << user[1]
                << " " << user[2] << " " << user[3] << " " << user[4] << endl;
}

//Displays the number of matches and if the user has won
void winnerOrLoser(int matches)
{
	cout << "You matched " << matches << " numbers";

	if (matches != SIZE)
		cout << "\nSorry. You didn't hit the jackpot.\n";
	else
		cout << "\nCongratulations! You WIN!\n";
		
}
//Solution to problem 7
void problem7(){
    double avgRain = 0;
	double rainSum = 0;
	int count = 0;
	double monthlyTotals[12];
	double lowpoint=100000;
	double highpoint=0;
	string lowMonth;
	string highMonth="January";
	string monthNames[] = {"January","Febuary","March","April","May","June","July","August","September","October","November","December"};
	cout << "Please enter the amount of rainfall for each month, and press enter after each" << endl;
	for (count = 0; count <= 11; count++)
	{
		cout<< monthNames[count] << " : ";
		cin >> monthlyTotals[count];
		while (monthlyTotals[count] < 0)
		{
			cout << "Please reenter a positive number for the month of " << monthNames[count] << endl;
			cin >> monthlyTotals[count];
		}
	}
		
	
	for (count =0; count <=11; count++)
		rainSum = rainSum + monthlyTotals[count];
	avgRain = rainSum / 12;
	for (count = 0; count <=11; count++)
	{	cout << endl;
		cout << monthNames[count] << "\t" << monthlyTotals[count] << endl;
	}
	highpoint = monthlyTotals[0];	
	for (count=0; count<=11; count++) 
	{
	if (monthlyTotals[count] >= highpoint)
	{
		highpoint = monthlyTotals[count];
		highMonth = monthNames[count];
	}
	}
	lowpoint = monthlyTotals[0];	
	for (count=0; count<=11; count++) 
	{
		if (monthlyTotals[count] <= lowpoint)
		{
		lowpoint = monthlyTotals[count];
		lowMonth = monthNames[count];
		}
	}
	tableFormat1("Total","Average","Lowpoint","Highpoint");
	tableFormat2(rainSum, avgRain, lowpoint,highpoint);
	cout << "The month(s) with the lowest rainfall is ";
	for (count=0; count <=11; count++)
	 
		if (monthlyTotals[count] == lowpoint)
			cout << monthNames[count] << ", ";
	
	cout << "with a rainfall of: "<< lowpoint << "." << endl;
	cout << "The month(s) with the highest rainfall is ";
	for (count=0; count <=11; count++)
		
		if (monthlyTotals[count] == highpoint)
			cout << monthNames[count] << ", ";
	
	cout << "with a rainfall of: "<< highpoint <<"." << endl;
}

void tableFormat1(string colA,string colB,string colC,string colD)
{
	cout <<setw(15) << fixed <<  colA <<setw(15) << fixed <<  colB 
                <<setw(15) << fixed <<  colC <<setw(15) << fixed <<  colD <<
                endl;
}
void tableFormat2(double colA,double colB,double colC,double colD)
{
	cout << setprecision(3)<<setw(15) << fixed <<  colA <<setw(15) 
                << fixed <<  colB <<setw(15) << fixed <<  colC <<setw(15) << 
                fixed <<  colD << endl;
}

void problem8(){
    const int SIZE2 = 18;
    int chargeAccount = 0;
    int results = 0;

    int tests[SIZE2] = {5658845, 450125, 7895122, 8777541, 8451277, 
    1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
    1005231, 654231, 3852085, 7576651, 7881200, 4581002};

    while (results == 0)
    {
        cout << "Enter your Charge Account Number: " << endl;
        cin  >> chargeAccount;

        results = searchList (tests, SIZE2, chargeAccount); 

        if (results == 1) 
            cout << "You Entered a Valid Number.\n"; 

        else
            cout << "You Entered an Invalid Number.\n";
    }
} 

int searchList(int list[], int numElems, int value) 
{     
    for(int i = 0; i < numElems; i++)
    { 
        if (list[i] == value)  
        {
            return 1;
        }
    }
    return 0;
}

void problem9(){
    
    const int SIZE = 10;
    int luckyNumbers = 0;
    int results = 0;

    int tests[SIZE] = {13579, 26791, 26792, 33445, 55555, 
    62483, 77777, 79422, 85647, 93121};

    while (results == 0)
    {
        cout << "Enter this week's winning numbers: " << endl;
        cin  >> luckyNumbers;

        results = searchList (tests, SIZE, luckyNumbers); 

        if (results == 1) 
            cout << "Congratulations! You won!\n"; 

        else
            cout << "You lost.\n";
    }
}

void problem10(){
    
    const int SIZE3 = 10;
    int luckyNumbers = 0;
    int results = 0;

    int tests[SIZE3] = {13579, 26791, 26792, 33445, 55555, 
    62483, 77777, 79422, 85647, 93121};

    while (results == 0)
    {
        cout << "Enter this week's winning numbers: " << endl;
        cin  >> luckyNumbers;

        results = binarySearch (tests, SIZE3, luckyNumbers); 

        if (results == 1) 
            cout << "Congratulations! You won!\n"; 

        else
            cout << "You lost.\n";
    } 
} 

int binarySearch(int list[], int size, int value)
{
    int first = 0; // First array element
    int last = size - 1; // Last array element
    int middle; // Midpoint of search
    int found = 0;

    while ((found == 0) && (first <= last))
    {
        middle = (first + last) / 2;    // Calculate the midpoint
        if (list[middle] == value)     // If winning number found at midpoint
        {
            found = 1;
            return 1;
        }
        else if (list[middle] > value)  // If winning number in lower half
            last = middle - 1;
        else
            first = middle + 1;         // If winning number in upper half
    }
    return 0;
}
//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}