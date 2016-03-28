//Practice 7.1
// This is 5.2 but built with switches.

#include <iostream>
#include <string>
using namespace std;

void singlePlayer (){}
void multiPlayer (){}
void options (){}

int main ()
{
    int choice;
    cout << "1. Singleplayer\n";
    cout << "2. Multiplayer\n";
    cout << "3. Options\n";
    cout << "4. Exit\n\n";
    cout << "Please make a selection:  ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            singlePlayer();
            break;
        case 2:
            multiPlayer();
            break;
        case 3:
            options();
            break;
        case 4:
            cout << "Thank you for playing! \n Goodbye!";
            break;
        default:
            cout << "Sorry, that's not a valid input.";
            break;
    }
}
