#include<iostream>
using namespace std;

int main () {
    int num1 = 0;
    int num2 = 0;
    for( int i = 0; i <= 4; i++) {
        cout << "Enter number" << endl;
        cin >> num1;
        if( num1 > 0){
            num2 = num2 + num1;
        }
    }
    cout << num2;


}