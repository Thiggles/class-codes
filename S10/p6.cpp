#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.length() !=16) {
        cout << "Not 16 characters";
    } else {
        int k = 0;
        for (int row = 0; row < 4; row++) {
            for (int col = 0; col < 4; col ++) {
                cout << s[k++] << " ";
            }
            cout << endl;
        }
    }
}