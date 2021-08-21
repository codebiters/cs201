#include <iostream>
/*This program takes an integer input from user and displays its table
 * The table is displayed upto the multiplier entered by the user*/

using namespace std;
int main(int argc, char** argv)
{
    int counter, number, maxMultiplier;

    // prompt hte user for input
    cout << "Please enter the number for which you want a table: ";
    cin >> number;
    cout << "Please enter the multiplier up to which you want a table: ";
    cin >> maxMultiplier;

    // the for loop
    for(counter = 1; counter <= maxMultiplier; counter = counter + 1) {
        cout << number << " x " << counter << " = " << number * counter << "\n";
    }
}
