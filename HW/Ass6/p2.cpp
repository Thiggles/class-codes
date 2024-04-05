#include<iostream>
using namespace std;

int main () {
    int num1= 0;
    int num2 =0;
    for( int i = 0; i <= 5;  i++) {
        cout << "enter number" << endl;
        cin >> num1;
        if(num1 <= -1) {
            num1 = num1*num1;
        }
        num2 = num1 + num2;


    }
    cout << num2;
}