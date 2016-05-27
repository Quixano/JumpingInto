/*
Chapter 6, Problem 2
Done with options allowing a user to select which operation
they want to perform
*/

#include <iostream>
using namespace std;

int add (int x, int y)
{
    int result = x + y;
    return result;
}

int subtract (int x, int y)
{
    int result = x - y;
    return result;
}

int multiply (int x, int y)
{
    int result = x * y;
    return result;
}

int divide (int x, int y)
{
    int result = x / y;
    return result;
}

int main()
{
    int x, y, choice;
    cout << "Enter the first number: \n";
    cin >> x;
    cout << "Enter the second number: \n";
    cin >> y;

    cout << "Please make your decision: \n";
    cout << "1 - Addition \n";
    cout << "2 - Subtraction \n";
    cout << "3 - Multiplication \n";
    cout << "4 - Division \n";
    cin >>choice;

    if (choice == 1)
    {
        cout << "The sum is ";
        cout << add(x,y);
    }
    else if (choice == 2)
    {
        cout << "The difference is ";
        cout << subtract(x,y);
    }
    else if (choice == 3)
    {
        cout << "The product is ";
        cout << multiply(x,y);
    }
    else if (choice == 4)
    {
        cout << "The divisor is ";
        cout <<divide(x,y);
    }
}
