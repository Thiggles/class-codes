#include<iostream>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    bool word = true;
    for (int i = 0; i < s.length(); i++) {
           if(( s[i] >= 'a' && s[i] <= 'z') or ( s[i] <= 'A' && s[i] >= 'Z')){
        word= true;
            } else if (s[i] == ' ') {
                word = false;
            }
    }
}