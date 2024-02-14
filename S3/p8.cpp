#include<iostream>
using namespace std;

int main() {
    float x;
    cout << "Enter a number:";
    cin >> x;
    if (x < 0 )
    {
        cout << "Negative number";
    }
    else if (x > 0){
        cout << "Positive Number!";
    }
    else if (x == 0)
    {
        cout << "Zero!";
    }
}
