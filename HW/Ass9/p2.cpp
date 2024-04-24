#include <iostream>
using namespace std;

int main()
{
    int num1 = 1;
    int num2 = 1;
    int num3;
    cout << "Enter a number." << endl;
    cin >> num3;
    for (int i = 0; i < num3; i++)
    {
        for (int j = 0; j < num1; j++)
        {
            cout << num2;
            num2++;
        }
        for (int k = 0; k < num1; k++)
        {
                num2--;
                cout << num2;
        }

        num2 = 1;
        cout << endl;
        num1++;
    }
}