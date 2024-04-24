#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter number of columns and rows." << endl;
    cin >> num1 >> num2;
    for(int i = 0; i < num1; i++){
        for (int j = 0; j < num2; j ++){
        cout << "X";
        cout<< "O";
        }
        cout << endl;
    }


}