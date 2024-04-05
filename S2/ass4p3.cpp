#include<iostream>
using namespace std;

int main() {
    int num1;
    cout << "Enter day of week as number 1 = Monday, 2 = Sunday, etc. " << endl;
    cin >> num1;
    if (num1 < 1 or num1 > 7) {
        cout << "Invalid entry";
    }
    if (num1 < 6){
        cout << "Weekday";
    }
    if (num1 > 5) {
        cout << "Weekend";
    }
}