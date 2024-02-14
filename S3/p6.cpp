#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a letter: ";
    cin >> ch; 
    if (ch =='a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U')
    cout << "It is a vowel!";
    else 
    cout << "It is a consonant!";
}
