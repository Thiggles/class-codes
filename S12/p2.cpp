#include<iostream>
using namespace std;

int main(){
    int num[7];
    for(int i = 0; i < 7 ; i ++){
        cin >> num[i];
    }
    for(int j = 0 ; j < 6 ; j + 2){
        for(int b : num){
            int c = c + b;
            if (b < 6) {
            cout << b << " + ";
            }
            if (b = 6) {
                cout << b << " = ";
            }
        }
        }
          for(int k = 1 ; k < 7 ; k + 2){
               for(int b : num){
            int d = d + b;
            if (b < 7) {
            cout << b << " + ";
            }
            if (b = 7) {
                cout << b << " = ";
            }
}
    }
}