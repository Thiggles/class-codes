#include<iostream>
using namespace std;

int main() {
    double TempF;
    cout << "Please enter temperature in Farenheit.";
    cin >> TempF;
    double TempC;
    TempC= (TempF - 32) * 5/9;
    cout << "The temperature in Celcius is: " << TempC;

}