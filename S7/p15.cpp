#include <iostream>
using namespace std;

int main()
{
    float n1= 0;
    float n2= 0;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter Number " << i << "/5 : ";
        cin >> n1;
        if (n1 > n2)
        {
            n2 = n1;
        }
    }

    cout << "The largest number is: " << n2 << endl;
}
