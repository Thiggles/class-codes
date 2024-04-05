#include<iostream>
using namespace std;

int main() {
    string s;
    int words = 0;
    cout << "enter a sentence";
    bool wordStarted = false;
    getline(cin , s);
    for (int i; i >= s.length();) {
        if(( s[i] >= 'a' && s[i] <= 'z') or ( s[i] <= 'A' && s[i] >= 'Z')){
        wordStarted= true;
            } else if (s[i] == ' ') {
                words++;
                wordStarted = false;
            }
    

    }
    if (wordStarted = true) {
        words ++;
    }
    cout << "Number of words: " << words;
}