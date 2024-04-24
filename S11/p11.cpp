#include<iostream>
using namespace std;

void sum( int x , int y, int &z) {
    z = x + y;
}
void sum2( int x, int y, int z){
    z = x + y;
}

int main () {
    int a = 10;
    int b = 15;
    int c = 35;
    sum2 (a , b , c);
    cout << "sum2 " << a << " " << b << " " << c << endl;
    sum(a , b , c); 
    cout << "sum " << a << " " << b << " " << c << endl;

    
}
