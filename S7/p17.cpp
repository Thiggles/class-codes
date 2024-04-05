#include <iostream>
using namespace std;

int main()
{
    int num1 = 0;
    int sum = 0;
    for (;;)
    {
        cout << "Enter a number " << endl;
        cin >> num1;
        if (num1 > 0)
        {
            sum = num1 + sum;
        }
        else
        {
            break;
        }
    }
    cout << sum;
}