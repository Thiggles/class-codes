#include<iostream>
using namespace std;

int main () {
    int a[5];
    for (int i = 0; i < 5 ; i++){
        cin >> a[i];
    }
    for (int b : a) {
        cout << b << " ";
    }
    }