#include<iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter a number: ";
    cin >> day;
    string dayname;
    day = day % 7;
    if (day == 1) {
        dayname = "Sunday";
    }
    else if (day == 2) {
        dayname = "Monday";
    }
    else if (day == 3) {
        dayname = "Tuesday";
    }
    else if (day == 4) {
        dayname = "Wednesday";
    }
    else if (day == 5) {
        dayname = "Thursday";
    }
    else if ( day == 6 ) {
        dayname = "Friday";
    }
    else if ( day == 0) {
        dayname = "Saturday";
    }
    else {
        cout << "Number is not compatible.";
    }
    cout << day << " = " << dayname;


 

    
}