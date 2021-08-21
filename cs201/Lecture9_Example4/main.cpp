#include <iostream>
/*This program is calling a function to test the given number is even or not*/
using namespace std;

// function declaration
int isEven(int);
int main(int argc, char** argv)
{
    int number;
    
    cout<<"Please enter the number: ";
    cin>>number;
    
    if(isEven(number)){
        cout<<"The number entered is even"<<endl;
    } else {
        cout<<"The number entered is odd"<<endl;
    }
}

int isEven(int number)
{
    if(2 * (number / 2) == number) {
        return 1;
    } else {
        return 0;
    }
}
