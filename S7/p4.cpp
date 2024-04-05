#include<iostream>
using namespace std;

int main () {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for ( int i = num -1 ; i %2 ; i --  ) {
        cout << i ;
    }
} 
