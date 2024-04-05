#include <iostream>
using namespace std;

int main(){
    char b;
    string a;
    for (;;){
    cout << "Enter word" << endl;
    cin >> a;
    cout << "Enter letter" << endl;
    cin >> b;
    int res = 0;
     if (a[b] == true){
            res++;
     }
     cout << res;
 
    }


}