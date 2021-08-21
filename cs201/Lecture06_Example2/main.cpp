#include <iostream>
/*This program calculates sum of even numbers for a given upper limit of integers*/
using namespace std;
int main(int argc, char** argv)
{
    // declaration of variables
    int sum, number, upperLimit;

    // initializationn of variables
    sum = 0;
    number = 1;

    // prompt the user for upper limit
    cout << "Plese enter the upper limit for which you want the sum: ";
    cin >> upperLimit;

    // using the while loop to find out the sumof first 1000 integers starting from 1
    while(number <= upperLimit) {

        // Add the even integer to the contents of sum
        if(number % 2 == 0) {
            sum = sum + number;
        }

        // Generate the next integer by adding 1 to the integer
        number = number + 1;
    }

    cout << "The sum of even numbers of first " << upperLimit << " integers starting from 1 is " << sum;
}
