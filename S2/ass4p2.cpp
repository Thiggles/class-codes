#include<iostream>
using namespace std;

int main () {
    int num1;
    int price;
    int num4;
    cout << "enter units consumed";
    cin >> num1;
    if (num1 < 100){
        price = .12 * num1;
    }
    if (num1 > 100){
        num4 = num1-100;
        price = (num4 * .15) + ((num1 - num4)*.12);

    }
    cout << "Price = " << price;
}