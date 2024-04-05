#include<iostream>
using namespace std;


int main () {
    int sides;
    int base, height;
    int area;
    int radius;
    cout << "Enter Shape : 1= Triangel, 2= Square, 3 = Circle";
    cin >> sides;
    switch(sides) {
    case 1:  cout <<"Enter base, then height"; 
    cin >> base >> height;
    area = base * height;
    break;
    case 2:  cout <<"Enter length, then width"; 
    cin >> base >> height;
    area = base * height;
    break;
    case 3:   cout <<"Enter Radius"; 
    cin >> radius;
    area =3.14 * ( radius * radius) ;
    break;

    }
    cout << area; 
} 