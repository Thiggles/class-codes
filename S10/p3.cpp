#include<iostream>
using namespace std;

int main() {
    int num1= 1;
    int num2 = 1;
    for(int i = 0 ; i < 10; i++  ) {
        for(int j = 0; j < 10 ; j++){
            cout << num1 << "x" << num2 << "= " << num1*num2 << ", ";
            num2++;
        }
        cout << endl;
        num1++;
        num2 = 1;

    }
}