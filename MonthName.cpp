// Month Name:
// Write a program that takes a number from 1 to 12 as input and prints the corresponding month name. 

#include <iostream>
using namespace std;

int main()
{

    int month;

    cout << "Enter the month from 1 to 12: ";
    cin >> month;

    switch (month)
    {
    case 1:
        cout << "This month is January";
        break;

    case 2:
        cout << "This month is February";
        break;

    case 3:
        cout << "This month is March";
        break;

    case 4:
        cout << "This month is April";
        break;

    case 5:
        cout << "This month is May";
        break;

    case 6:
        cout << "This month is June";
        break;

    case 7:
        cout << "This month is July";
        break;

    case 8:
        cout << "This month is August";
        break;

    case 9:
        cout << "This month is September";
        break;

    case 10:
        cout << "This month is October";
        break;

    case 11:
        cout << "This month is November";
        break;

    case 12:
        cout << "This month is December";
        break;

    default:
        cout << "Error! Please enter the correct number which is given(1-12)";
        break;
    }
}


