#include<iostream>
using namespace std;

int main () {
    int sides;
    cout << "Enter number of sides: ";
    cin >> sides;
    string shape ="Expected number of sides is 3 or 4";
    if (sides == 3) {
        shape = "Triangle";
    }
    else if (sides == 4) {
        shape = "Quadrilateral";
    }
    cout << shape;
 

}