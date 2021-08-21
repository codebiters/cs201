#include <iostream>
/*This program calculates the sum of first 1000 integers*/
using namespace std;
int main(int argc, char** argv)
{
    // declaration of variables
    int sum, number;

    // initializaiton of variables
    sum = 0;
    number = 1;

    // using the while loop to find out the sum of first 1000 integers starting from 1

    while(number <= 1000) {

        // Adding the integers to contents of the sum
        sum = sum + number;

        // Generate the next integer by adding 1 to integer
        number = number + 1;
    }

    cout << "The sum of first 1000 integers starting from 1 is: " << sum;
}
