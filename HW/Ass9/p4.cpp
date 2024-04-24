#include<iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    bool name = true;
    char firstletter = 'Z';
    for(int i =0 ;  i < s.length(); i++){
        for(int j = 0; j < s.length(); j++){
            if(s[j] == ' '){
                j++;
            }
            if(name = true){
            if(s[j] < firstletter)
            firstletter = s[j];
            name = false;
            }
        }
        }
        cout << firstletter;
    }