//Practicar 6.3
/*A very insecure "password checker"
  Now in function form */

#include <iostream>
#include <string>

using namespace std;
int password;

string verify (int password)
{
    if (password == 1234)
    {
        return "Welcome back";
    }
    else
    {
        return "Access Denied";
    }
}

int main ()
{
    cout << "Please input your password" << endl;
    cin  >> password;
    cout << verify(password);
}
