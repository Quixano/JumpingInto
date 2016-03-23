//Practice 6.2
/*Redo the calculator program
  to perform each calculation
  in a separate function.*/

#include <iostream>
using namespace std;

int firstNumber, secondNumber;

int add(int firstNumber, int secondNumber);
int sub(int firstNumber, int secondNumber);
int mult(int firstNumber, int secondNumber);
int div(int firstNumber, int secondNumber);

int main()
{
    cout << "Enter the first number: " << endl;
    cin >> firstNumber;
    cout << "Enter the second number:" << endl;
    cin >> secondNumber;

    int sum = add(firstNumber, secondNumber);
    int diff = sub (firstNumber, secondNumber);
    int prod = mult (firstNumber, secondNumber);
    int quot = div (firstNumber, secondNumber);
    cout << "Addition of the two numbers gives us: " << sum << endl;
    cout << "Subtraction of the two numbers gives us: " << diff << endl;
    cout << "Multiplying the two numbers gives us: " << prod << endl;
    cout << "Dividing the two numbers gives us: " << quot << endl;
}

int add (int firstNumber, int secondNumber)
{
    return firstNumber + secondNumber;
}

int sub (int firstNumber, int secondNumber)
{
    return firstNumber - secondNumber;
}

int mult (int firstNumber, int secondNumber)
{
    return firstNumber * secondNumber;
}

int div (int firstNumber, int secondNumber)
{
    return firstNumber / secondNumber;
}
