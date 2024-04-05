#include<iostream>
using namespace std;

int main () {
    int num1;
    cout << "Enter a number:  ";
    cin >> num1;
    for(int mult = 1; mult <=10; mult++  )
       cout << num1 << "*" << mult << " = " << num1* mult << ", ";

        
}