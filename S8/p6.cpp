#include<iostream>
using namespace std;

int main() {
    string names;
    getline(cin,names );
    string firstNameinlist= "";
    bool shouldWeRecordTheName = true;
    for (int i = 0; i < names.length(); i++) {
        if(shouldWeRecordTheName) {
            firstNameinlist += names [i];

        }
    }
}