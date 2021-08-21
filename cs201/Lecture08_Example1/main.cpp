#include <iostream>
/*This program gets a grade from user and displays a description accordingly*/
using namespace std;
int main(int argc, char** argv)
{
    char grade;
    cout << "Please enter the student's grade: ";
    cin >> grade;

    switch(grade) {
    case 'A': // grade was uppercase A
    case 'a': // grade was lowecase a
        cout << "Excellent";
        break; // necessary to exit switch

    case 'B': // grade was uppercase B
    case 'b': // grade was lowercase b
        cout << "Very Good";
        break; // necessary to exit switch

    case 'C': // grade was uppercase C
    case 'c': // grade was lowecase c
        cout << "Good";
        break; // necessary to exit switch

    case 'D': // grade was uppercase D
    case 'd': // grade was lowercase d
        cout << "Poor";
        break; // necessary to exit switch

    case 'F': // grade was uppercase F
    case 'f': // grade was lowecase f
        cout << "Fail";
        break; // necessary to exit switch

    default:
        cout << "Please enter grade A to D or F";
    }
}
