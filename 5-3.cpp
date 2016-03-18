//Practicar 5.3
/* A bit mmore complicated this time...
This is a "sum calculator" with a twist.
Basically, it accepts inputs of whole numbers and adds it to the previous one.
However, it stops if the person enters 0. */

#include <iostream>
#include <string>
using namespace std;
  int main () {
    int input;
    int sum = 0;
      while (input != 0){
        cout << "Please input a whole number" <<endl;
        cin >> input;
        cout << input + sum << endl;
        sum = sum + input;
      }
  }
