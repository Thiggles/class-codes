#include<iostream>
using namespace std;


void sayhi(string S){
    cout << "hi" << S;
}
int main(){
    string name;
    do {
        cin >> name;
        if (name == "end") {
            break;
        }
        sayhi(name);
    } while ( name != "end") ;
    }