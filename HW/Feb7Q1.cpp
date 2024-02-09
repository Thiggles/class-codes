#include<iostream>
using namespace std;

int main() {
    int base;
    cout << "Enter length of base: ";
    cin >> base;
    int height;
    cout << "Enter height of triangle: ";
    cin >> height;
    int area = height * base / 2;
    cout << "The area of your triangle is: " << area;
}