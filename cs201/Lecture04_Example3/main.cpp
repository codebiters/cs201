/* Following program takes the radius of a circle from the user and calculates the diameter, circumference
 * and area */
#include <iostream>

using namespace std;
int main(int argc, char** argv)
{
    //	Declaring the variables
    float radius, diameter, circumference, area;

    // prompt the user for radius of a circle
    cout << "Please enter the radius of the circle: ";
    cin >> radius;

    // calculate the diameter, circumference and area of the circle
    // implementing formula i.e. diameter = 2 r circumference = 2 pi r and area = pi r square
    diameter = radius * 2;
    circumference = 2 * 3.14 * radius; // 3.14 is the value of Pi
    area = 3.14 * radius * radius;

    // display the result
    cout << "The diameter of the circle is : " << diameter << "\n";
    cout << "The circumference of the circle is: " << circumference << "\n";
    cout << "The area of the circle is: " << area << "\n";
}
