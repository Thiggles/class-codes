#include<iostream>
using namespace std;

int main () {
    int sides;
    cout << "Enter number of sides: ";
    cin >> sides;
    switch(sides) {
    case 3:  cout << "Triangle\n"; break;
    case 4: cout << "Quadrilateral\n"; break;
    case 5: cout <<  "Pentagon\n"; break;
    case 6: cout << "Hexagon\n";
    }
} 