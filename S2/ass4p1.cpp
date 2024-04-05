#include<iostream>
using namespace std;



int main () {
    int num1;
    cout << "Enter your age." << endl;
    cin >> num1;
    if (num1 <= 0) {
        cout << "Invalid Entry";
    }
    if (num1 < 13) {
        cout << "Child";
    } 
    if ( num1 >12 && num1 < 20) {
        cout << "Teen";
    }
    if (num1 > 19 && num1 < 65 ) {
        cout << " Adult";
    } else {
        cout << "Senior" ;
    }
}