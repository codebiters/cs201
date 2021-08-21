#include <iostream>
/*This program calculates the factorial of a given number*/
using namespace std;
int main(int argc, char **argv)
{
    // declaration of variables
    int factorial, number;
    
    factorial = 1;
    number = 1;
    
    // prompt the user to enter upper limit of integers
    cout<<"Please enter the number for factorial: ";
    cin>>number;
    
    // using the while loop to find out the factorial
    while(number > 1){
        factorial = factorial * number;
        number = number -1;
    }
    
    cout<<"The factorial is: "<< factorial;
}
