//Practicar 5.4
/* A variant of the "password checker"
Basically, if the user enters the incorrect password 3 times,
the process terminates. */


#include <iostream>
#include <string>
using namespace std;
int main () {
  string password;
  int attempts = 3;
  while (attempts != 0 || password == "foobar"){
    cout << "Please enter the password" <<endl;
	cin >> password;
	if (password == "foobar"){
	  cout << "Welcome back!";
	  break;
	}
	else{
      --attempts;
	}
  }
}
