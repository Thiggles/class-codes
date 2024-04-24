#include<iostream>
using namespace std;


 double calcsum( double x, double y){
    double z = x + y;
    return z;
 }
 int main() {
    for( int i = 0; i < 3; i ++) {
        double a, b;
        cin >> a >> b;
        double c = calcsum(a,b);
        cout << c << endl;
    }
    cout << calcsum (5 , 11) << endl;
    cout << calcsum (5, 14) << endl;
 }

