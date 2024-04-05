#include <iostream>
using namespace std;

int main()
{
    double total;
    double price;
    int items;
    cout << "Enter number of items: ";
    cin >> items;
    for(int i = 1; i <= items; i ++) {
        cout << "Enter price for item #" << i << ": ";
        cin >> price;
        total = price + total;

    }
    cout << "total = " << total << endl;
}