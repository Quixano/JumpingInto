//Practice 6.2(b)
/*Redo the calculator program
  to perform each calculation
  in a separate function.*/
/*This version was done without
  using function prototyping.
  I don't know which I like better. */  
  
#include <iostream>
using namespace std;

int firstNumber, secondNumber;

int add(int firstNumber, int secondNumber)
{
    return firstNumber + secondNumber;
}
int sub(int firstNumber, int secondNumber)
{
    return firstNumber - secondNumber;
}
int mult(int firstNumber, int secondNumber)
{
    return firstNumber * secondNumber;
}
int div(int firstNumber, int secondNumber)
{
    return firstNumber / secondNumber;
}

int main()
{
    cout << "Enter the first number: " << endl;
    cin >> firstNumber;
    cout << "Enter the second number:" << endl;
    cin >> secondNumber;

    cout << "Addition: " << add(firstNumber, secondNumber) << endl;
    cout << "Subtraction: " << sub (firstNumber, secondNumber) << endl;
    cout << "Multiplication: " << mult (firstNumber, secondNumber) << endl;
    cout << "Division: " << div (firstNumber, secondNumber) << endl;
}
