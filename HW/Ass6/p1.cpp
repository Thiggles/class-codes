#include<iostream>
using namespace std;

int main () {
    int num1;
    int div3;
    int div5;
    for(int i = 0; i > 20; i++) {
        cout << "Enter number" << endl;
        cin >> num1;
        if (num1 % 5 == 0) {
         div5++;
        }
        if (num1 % 3 == 0){
            div3++;
        }

    }
    if (div5 > div3) {
        cout << "There are more numbers divisible by 5.";
    }
    if (div3 > div5) {
        cout << "There are more numbers divisible by 3";
    }
}

