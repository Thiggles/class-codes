#include <iostream>
using namespace std;

int main()
{
    double num1 = 0;
    double num2 = 0;
    for (int repeat = 0; repeat <= 5; repeat += 0)
    {
        cout << "Enter 1st number: ";
        cin >> num1;
        cout << "M= Multiply D= Divide A= Add S= Subtract ";
        char action;
        cin >> action;
        if (action == 'M')
        {
            cout << "Enter number to multiply by: ";
            cin >> num2;
            cout << num1 << "*" << num2 << "= " << num1 * num2 << endl;
        }
        else if (action == 'D')
        {
            cout << "Enter number to divide by: ";
            cin >> num2;
            cout << num1 << "/" << num2 << "= " << num1 / num2 << endl;
        }
        else if (action == 'A')
        {
            cout << "Enter number to Add: ";
            cin >> num2;
            cout << num1 << "+" << num2 << "= " << num1 + num2 << endl;
        }
        else if (action == 'S')
        {
            cout << "Enter number to Subtract: ";
            cin >> num2;
            cout << num1 << "-" << num2 << "= " << num1 - num2 << endl;
        }
        else cout << "Invalid entry." << endl;
}
}