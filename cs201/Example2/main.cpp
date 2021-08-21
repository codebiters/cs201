#include <iostream>

using namespace std;
int main(int argc, char** argv)
{
    //  A program that takes a four digits integer from user and shows the digists on the screen
    //  separately i.e. if user enters 7531, it displays 7,5,3,1 separately

    int number, digit;

    // prompt the user for input
    cout << "Please enter 4 digit number: ";
    cin >> number;

    // get the first digit and display on the screen
    digit = number % 10;
    cout << "The digits are: ";
    cout << digit << ", ";

    // get the remaining three digits number
    number = number / 10;

    // get the next digit and display it
    digit = number % 10;
    cout << digit << ", ";

    // get the remaining two digits
    number = number / 10;

    // get the next digit and display it
    digit = number % 10;
    cout << digit << ", ";

    // get the remaining one digit number
    number = number / 10;

    // get the next digit and display it
    digit = number % 10;
    cout << digit;
}
