//Exercise 4.1
//If-Else statement and logical operator

#include <iostream>
#include <string>
using namespace std;
int main ()
{
  int firstAge;
  int secondAge;
  
  cout << "Enter the first age:" << \endl;
  cin  >> firstAge;
  cout << "Enter the second age:" << \endl;
  cin  >> secondAge;
  
  if (firstAge > 100 || secondAge > 100)
  {
    cout << "Wow! One of you is over a hundred!";
	return 0;
  }
  if (firstAge > secondAge)
  {
    cout << "The first age is older";
  }
  else
  {
    cout << "The second age is older";
  }
}
