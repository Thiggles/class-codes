#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter a Palindrome ";
    cin >> s;
    bool palindrome = true;
    for (int i = 0, j = s.length() - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            palindrome = false;
            break;
        }
    }
    if (palindrome == true)
    {
        cout << "You entered a palindrome";
    }
    else {
        cout << "You did not enter a palindrome";
    }
}