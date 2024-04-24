#include<iostream>
using namespace std;

int main() {
    string s;
    string lastword = "";
    getline (cin, s);
    bool word = true;
    for( int i = 0; i <s.length(); i++) {
        if (word = true) {
        if ((s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <= 'Z')) {
            lastword = lastword + s[i];
        }
        }
        if( s[i] == ' ' ) {
        word = false;
        lastword = " ";
    }
    }
 cout << lastword;
}