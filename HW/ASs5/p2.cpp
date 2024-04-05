#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number" << endl;
    int num1;
    cin >> num1;
    if (num1 == 0)
    {
        cout << "The number is zero.";
    }
    if (num1 >= 1)
    {
        cout << "The number is positive ";
    }
    else if (num1 <= -1)
    {
        cout << "The number is negative";
    }
    if ( num1 % 2 == 0)
    {
        cout << "and even ";
    }
    else if ( num1 % 2 != 0)
    {
        cout << "and odd";
    }
}