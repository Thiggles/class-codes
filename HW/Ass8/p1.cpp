#include<iostream>
using namespace std;


int main() {
    string s;
    int wordCount = 0;
    getline(cin,s);
    bool wordStarted = false;
    for(int i = 0; i < s.length(); i++) { 
    if (wordCount == 2) { 
    s[i] = '*';
    }
    if ((s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <= 'Z')) { 
    wordStarted = true; 
    } else if (s[i] == ' ') { 
    if (wordStarted) {
    wordCount++; 
    wordStarted = false; 
            }
        }

    }
    cout << s;
    }