#include <iostream>
using namespace std;

int main()
{
    int student;
    cout << "enter number of students." << endl;
    int num1;
    cin >> num1;
    int num2 = 0;
    int grade = 0;
    for (int j = 0; j < student; j++)
    {
        cout << "enter number of assignments for student " << j + 1 << endl;
        cin >> num1;
        for (int i = 0; i < num1; i++)
        {
            cout << "Enter grade " << i + 1 << ": ";
            cin >> num2;
            grade = grade + num2;
        }
        grade = grade / num1;
        cout << "Average for student " << j + 1 << " = " << grade << endl;
        grade = 0;
    }
}