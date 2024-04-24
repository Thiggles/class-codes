#include<iostream>
using namespace std;

int main() {
    string s;
    int words = 0;
    cout << "enter a sentence";
    bool wordStarted = false;
    getline(cin , s);

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