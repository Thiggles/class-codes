#include<iostream>
using namespace std;

int main() {
int num1;
cout << "Enter num1: ";
cin >> num1;
int num2;
cout << "Enter num2: ";
cin >> num2;
int temp = num2;
num2 = num1;
num1 = temp;
cout << "num1 is now: " << num1;
cout << " num2 is now: " << num2;
}
