#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int div = 0;
    for (num = 2; num <= 50; num += 2){
            div = num + div;
    }
    cout << div;
}