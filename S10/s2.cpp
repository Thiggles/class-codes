#include<iostream>
using namespace std;

int main () {
    string s = "";
    int i = 0;
    string rev = "";
    while (i > 1);
    cout << "Enter a string." << endl;
    cin >> s;
    if (s == "stop") {
        i++;
    } else {
        int t = 0;
        while( t < s.length()){
         rev = s[i] + rev;
         t++;
        }
    cout << rev;
    }
}