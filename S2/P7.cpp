#include<iostream>
using namespace std;

int main() {
    double TempF;
    cout << "Please enter temperature in Fahrenheit: ";
    cin >> TempF;
    double TempC;
    TempC= (TempF - 32) * 5/9;
    cout << "The temperature in Celcius is: " << TempC;

}