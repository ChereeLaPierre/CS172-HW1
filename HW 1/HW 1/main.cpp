#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void ex02();
void ex03();
void ex04();
void ex05();
void doubleInteger();
void add(int a, int b);

const int NUMBER_OF_INTEGERS = 5;
double box[NUMBER_OF_INTEGERS];

void arrayOne(int list[], int arraySize);
int arrayTwo();
int number;

int main()
{
    ex02();
    ex03();
    ex04();
    ex05();
    
    return 0;
}

void ex02()
{
    // Part a
    // Initialize variable to true
    bool hasPassedTest = true;
    
    // Part b
    // Generate random number for x and y
    int x = rand() % 1000;
    int y = rand() % 1000;
    cout << "x equals " << x << " and y equals " << y << endl;
    // Display if x is greater than or equal to y
    if (x > y)
    {
        cout << "x is greater than y" << endl;
    }
    else if ( x == y)
    {
        cout << "x is equal to y" << endl;
    }
    else
    {
        cout << "x is not greater than or equal to y" << endl;
    }
    
    // Part c
    // Declare variable and output whether it is less than 100 or not
    int numberOfShares;
    cout << "Enter a value: ";
    cin >> numberOfShares;
    if (numberOfShares < 100)
        cout << numberOfShares << " is less than 100." << endl;
    else
        cout << numberOfShares << " is not less than 100." << endl;
    
    // Part d
    // Prompt user for box and book width
    cout << "Enter the width of a box: ";
    int boxWidth;
    cin >> boxWidth;
    cout << "Enter the width of a book: ";
    int bookWidth;
    cin >> bookWidth;
    //Output whether or not box width is evenly divisible by the book width
    if (boxWidth % bookWidth == 0)
        cout << "The box width is evenly divisible by the book width." << endl;
    else
        cout << "The box width is not evenly divisible by the book width." << endl;
    
    // Part e
    // Prompt user for shelf life of chocolate and outside temperature
    cout << "Enter the shelf life of a box of chocolate: ";
    int shelfLife;
    cin >> shelfLife;
    cout << "Enter the outside temperature: ";
    int outsideTemp;
    cin >> outsideTemp;
    // Decrease shelf life by 4 if temperature is over 90 degrees
    if (outsideTemp  > 90)
    {
        shelfLife = shelfLife - 4;
        cout << "The shelf life is " << shelfLife << endl;
    }
    else
        cout << "The shelf life is " << shelfLife << endl;

}

void ex03()
{
    // Part a
    // Have user input the area of a square
    cout << "Enter the area of a square: ";
    double area;
    cin >> area;
    double diagonal;
    diagonal = sqrt(area);
    // Output length of diagonal
    cout << "The length of the diagonal is " << diagonal << endl;
    
    // Part b
    // Have user enter y/n and output yes/no
    char ch;
    cout << "Do you want to continue? (y/n)";
    cin >> ch;
    if (ch == 'y')
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    
    
    // Part c
    char tab = '\t';
    
    // Part d
    // Prompt user for mailing address
    cout << "Enter your mailing address: ";
    string mailingAddress;
    getline(cin, mailingAddress);
    cout << "Your mailing address is " << mailingAddress << endl;
    
    // Part e
    // Initialize string variable to empty string
    string homework;

}

void ex04()
{
    // Part a
    // Have user input a number between 1 and 10
    // Loop until the input is valid
    do
    {
        cout << "Enter a number between 1 and 10: ";
        cin >> number;
    }
    while (number < 1 && number > 10);
    
    // Part b
    // Output the sum of the cubes from 1 to the number the user gave
    double sum;
    for (int i = 1; i <= number; i++)
    {
        sum += pow(i, 3);
    }
    cout << "The sum of the cubes from 1 to " << number << " is " << sum << endl;
    
    // Part c
    // Output x number of astrisks
    do
    {
        cout << "* ";
        number--;
    }
    while (number > 0);
    cout << endl;
    
    // Part d
    // Output even numbers from 1 to 40
    for (int evenNumber = 1; evenNumber <= 40; evenNumber++)
    {
        evenNumber = evenNumber + 1;
        cout << evenNumber << " ";
    }
    cout << endl;
    
    // Part e
    doubleInteger();
    cout << endl;
    
    // Part f
    cout << "Enter two numbers: ";
    int number1, number2;
    cin >> number1;
    cin >> number2;
    add(number1, number2);
    
    // Part g
    
}

void ex05()
{
    // Part a
    // Prompt user to input 5 integers and store them in an array
        for (int i = 0; i < NUMBER_OF_INTEGERS; i++)
    {
        cout << "Enter a number: ";
        cin >> box[i];
    }
    
    // Part b
    // Calculate sum
    double sum = 0;
    for (int i = 0; i < NUMBER_OF_INTEGERS; i++)
    {
        sum += box[i];
    }
    cout << "The sum for all of the integers is " << sum << endl;
    // Calculate product
    double product = 1;
    for (int i = 0; i < NUMBER_OF_INTEGERS; i++)
    {
        product *= box[i];
    }
    cout << "The product of all of the integers is " << product << endl;
    
    // Part c
    
    
    // Part d
    
    
    
}

void arrayOne(int list[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        cout << list[i] << " ";
    }
    
}

void doubleInteger()
{
    number = number * 2;
    cout << "The number doubled is " << number;
}

void add(int a, int b)
{
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;
}


