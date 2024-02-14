#include<iostream>
using namespace std;

int main () {
    double x;
    double y;
    cout << "Enter month as number ";
    cin >> x;
    cout << "Enter year ";
    cin >> y;
    if ( y % 400 == 0) {
         y = 2;
    }
    else if ( y % 100 == 0) {
        y = 1;
    } 
    else if ( y % 4 == 0) {
        y= 2;
    }
    if (x == 1 or x== 3 or x== 5 or x ==7 or x ==8 or x == 10 or x == 12) {
        cout << "Month has 31 days";
    }
    else if (x==4 or x==6 or x==9 or x==11 ) {
        cout << "Month has 30 days";
    }
    else if (x==2){ 
        if (y == 1){
        cout << "Month has 28 days";
        }
        else if (y == 2) {
            cout << "Month has 29 days";
        }
    }
    else cout << "Number is incompatible.";
}
