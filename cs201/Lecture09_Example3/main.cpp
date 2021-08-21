#include <iostream>
/*This program calculates the area of a ring*/
using namespace std;

// function declaration
double circleArea(double radius);
int main(int argc, char** argv)
{
    double rad1;
    double rad2;
    double ringArea;

    cout << "Please enter the outer radius value: ";
    cin >> rad1;
    cout << "Please enter radius of inner circle: ";
    cin >> rad2;

    ringArea = circleArea(rad1) - circleArea(rad2);

    cout << "Area of the ring having inner radius " << rad2 << " and the outer radius " << rad1 << " is " << ringArea;
}

double circleArea(double radius)
{
    // the value of Pi = 3.1415926
    return (3.1415926 * radius * radius);
}
