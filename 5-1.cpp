//Practicar 5.1
//Just something that prints "99 Bottles of Beer on the Wall".
#include<iostream>
#include<string>
using namespace std;
int main () {

int drinks = 99;
while (drinks > 0){
  cout <<drinks <<" bottles of beer on the wall, " <<endl;
  cout <<drinks << " bottles of beer!"<<endl;
  cout << "Take one down, pass it around"<<endl;
  drinks--;
  cout << drinks <<" bottles of beer on the wall!";
  cout << endl;
  }
}
