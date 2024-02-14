#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Please enter a number: ";
    cin >> x;
    if (x == 10)
    {
        cout << "Your number is 10!";
    }
    else
    {
        if (x > 10)
        {
            cout << "Your number is greater than 10!";
        }
        else
        {
            if (x < 10)
            {
                cout << "Your number is less than 10!";
            }
        }
    }
}