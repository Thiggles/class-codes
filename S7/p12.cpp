#include <iostream>
using namespace std;

int main()
{
    string pass = "ABCD";
    string pass2 = "";
    for (; pass2 != pass;)
    {
        cout << "Enter password: ";
        getline(cin, pass2);
        if (pass2 != pass)
        {
            cout << "Invalid password" << endl;
        }
        else
        {
            cout << "Password Correct, Welcome" << endl;
        }
    }
}
