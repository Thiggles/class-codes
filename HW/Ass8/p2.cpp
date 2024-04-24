#include <iostream>
using namespace std;

int main()
{
    string s = "";
    getline(cin, s);
    bool firstltter = true;
    string abb = "";
    for(int i = 0; i < s.length(); i++) {
    if (firstltter) {
        if ((s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <= 'Z'))
        {
            abb = abb + s[i];
            firstltter = false;
        }
    }
    else if (firstltter == false )
        {
            {
                i++;
                if ((s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <= 'Z'))
                {
                    firstltter = true;
                    i--;
                }
            }
    }
    }
       cout << abb;
}
 