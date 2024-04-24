#include<iostream>
using namespace std;

int main() { 
    string s; 
    getline(cin, s);
    int wordCount = 0; 
    bool letta = false;
    bool word = false;
    for(int i = 0; i < s.length(); i++) { 
        if (s[i] == ' ') { 
            wordCount++; 
            word = true;
         if (!(s[i] == 'a') or (s[i] == 'A' )) { 
            word = false;
         }
        else if (word = true) {
            if ((s[i] == 'a') or (s[i] == 'A' )) {
            letta = true;
            break;
            }
        }
        }
    }
    if (letta = false) { cout << "Not Found" ;}
    cout << wordCount + 1 << endl; 
}
