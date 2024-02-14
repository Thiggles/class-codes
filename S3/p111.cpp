#include<iostream>
using namespace std;

int main() {
    int sides;
    cout << "Enter number of sides ";
    cin >> sides;
    if (sides == 4) {
        cout << "Quadrilateral";
    }
    else if (sides == 3) {
        cout << "Triangle";
    }
    else if (sides == 5) {
        cout << "Pentagon";
    }
    else if (sides == 6) {
        cout << "Hexagon";
    }
    else cout << "No";
}
    