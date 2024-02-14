#include<iostream>
using namespace std;

int main() {
    int x, y, z, largest;
    cout << "Enter 1st number: ";
    cin >> x;
    cout << "Enter 2nd number: ";
    cin >> y;
    cout << "Enter 3rd number: ";
    cin >> z;
    if (x>y && x>z)
    {
        largest = x;;
    }
    if (x<y && y>z)
    {
        largest = y; ;
    }
    if (x<z && y<z)
    {
        largest = z;
    }
    cout << "The largest number is " << largest;
    }