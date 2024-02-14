#include<iostream>
using namespace std;

int main() {
    int x;
    cout << "Please choose item on menu.";
    cin >> x;
    if (x == 1) {
        cout << "$10";
    }
    else if ( x == 2 ){
        cout << "$20";
    }
    else if ( x== 3 ){
        cout << "30";
    }
    else if (x == 4) {
        cout << "$25";
    }
    else if (x == 5); {
        cout << "$39";
    }

}