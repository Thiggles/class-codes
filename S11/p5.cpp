#include<iostream>
using namespace std;


 double calcarea( double x, double y){
    double z = x + y;
    return z;
 }
 int main() {
    for( int i = 0; i < 3; i ++) {
        double a, b;
        cin >> a >> b;
        double c = calcarea(a,b);
        cout << c << endl;
    }
    cout << calcarea (5 , 11) << endl;
    cout << calcarea (5, 14) << endl;
 }

