#include <iostream>
using namespace std;

int main()
{
    int num[10]{12, 2, 5, 9, 13, 3, 23, 9, 0, 55};
    int i = 0;
    while (i < 10)
    {
        int b = 0;
        int a = num[i];
        int c = num[i];
        if (num[i] > b)
        {
            b = num[i];
        }
        else
        {
            num[i] = c;
        }
    }
    for(int j = 0; j < 10; j++){
        for (int b : num){
            cout << b;
        }
    }
}
