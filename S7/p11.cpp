#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int sum = 0;
    for (num = 15; num <= 100; num+= 15)
    {
        if (num % 3 == 0 && num % 5 == 0)
        {
                  sum = sum + num;
     
        }
    }
       cout << sum << endl;
}