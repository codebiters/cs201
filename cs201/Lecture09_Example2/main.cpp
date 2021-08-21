#include <iostream>
/*This program calculates the power of given number*/
using namespace std;

double raiseToPow(double x, int power);

int main(int argc, char** argv)
{
    double x;
    int i;

    cout << "Please enter the number: ";
    cin >> x;

    cout << "Please enter the integer power that you want this number raised to: ";
    cin >> i;
    cout << x << " raise to power " << i << " is equal to " << raiseToPow(x, i);
}

double raiseToPow(double x, int power)
{
    double result;
    int i;
    result = 1.0;

    for(i = 0; i < power; i++) {
        result *= x; // same as result = result * x
    }
    return result;
}