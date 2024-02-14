#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    cout << "Enter 1st number: ";
    cin >> x;
    cout << "Enter 2nd number: ";
    cin >> y;
    if (x > y)
    {
        cout << "The greater number is: " << x;
    }
    else
    {
        if (x < y)
        {
            cout << "The greater number is: " << y;
        }
    }
}