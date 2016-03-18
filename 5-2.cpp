//Practicar 5.2
//An example of selecting different "menu options"
//I just used a basic game template. (._. )

#include <iostream>
#include <string>
using namespace std;
  int main () {
    string choice;
	while (1){
	  cout << "Singleplayer" <<endl;
	  cout << "Multiplayer"<<endl;
	  cout << "Options"<<endl;
	  cout << "Your selection:  ";
	  cin >> choice;
	  cout << endl;
	  if (choice == "Singleplayer" || choice == "Multiplayer" || choice == "Options"){
	    break;
	  }
	}
	cout << "You have chosen "<<choice<<endl;
  }
