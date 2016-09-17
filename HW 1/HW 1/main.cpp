#include <iostream>
using namespace std;

void ex02();
void ex03();
void ex04();
void ex05();

int main()
{
    // 1 a
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
    // Output greater number
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
    // Declare variable and output whether if is less than 100 or not
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
    
    // Decrease shelf life by 4 if temperature is over 90
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
    
}

void ex04()
{
    
    
}

void ex05()
{
    
}





