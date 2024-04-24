 #include<iostream>
 using namespace std;
 
 
 void swapvalue( double x, double y){
    int temp = x;
    x = y;
    y = temp;
 }

    int main () {
        for(int i = 0 ; i < 3 ; i++) {
            int a, b;
            cin >> a >> b;
            int c = a + b;
            a = c - a;
            b = c - a;
            cout << a << b;

        }
    }


    }