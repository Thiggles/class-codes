#include<iostream>
using namespace std;

int main() {

    int area;
    char shape;
    int width;
    int height;
    int length;
    cout << "Enter shape. C = Circle, T = Triangle S = Square ";
    cin >> shape;
    if ( char shape = 'S') {
        cout << "Enter Length";
        cin >> length;
        cout << "Enter Height";
        cin >> height;
        int area = length * width;
        cout << "Area is: " << area;}
    else if(shape = 'T' ) {
        int base;
        int height;
        cout <<"Enter Base";
        cin >> base;
        cout << "Enter height";
        cin >> height;
        int area = .5 * (base * height);
        cout << area;
    }
    else if( shape = 'C') {
        int radius;
        cout << "Enter Radius";
        cin >> radius;
        int area = 3.14159265 * (radius * radius);
        cout << area;
    }
}
