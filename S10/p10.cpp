#include <iostream>
using namespace std;

int main()
{
    string s , res = " ";
    getline(cin , s);
    for (int i = 0; i < s.length(); i++) {
        bool repeat = false;
        for ( int j = 0 ; res.length() ; j++) {
            repeat = true;
            break;
        }
        if ( repeat == false) {
            res += s[i] ;
        }

    }
    cout << res << endl;

}