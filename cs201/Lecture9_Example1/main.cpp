#include <iostream>
/*This program calculates the square of a given number*/
using namespace std;

int square(int number);

int main(int argc, char** argv)
{
    int number, result;
    result = 0;
    number = 0;
    cout<<"Please enter the number to calculate the square: ";
    cin>>number;
    
    // Calling the function square
    result = square(number);
    
    cout<<"The square of "<<number<<" is "<<result<<endl;
}

// function to calculate the square of a number
int square(int number){
    return (number * number);
}
