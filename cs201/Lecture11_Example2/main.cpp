#include <iostream>
/*This program calculate the sum of squares of numbers stored in an array*/
using namespace std;
int main(int argc, char **argv)
{
    int a[10];
    int sumOfSquares = 0;
    int i = 0;
    
    cout<<"Please enter the 10 numbers one by one: "<<endl;
    
    // Getting the input from user
    for(i = 0; i<10; i++){
        cin>>a[i];
    }
    
    // Calculating the sum of squares
    for(i = 0; i<10; i++){
        sumOfSquares = sumOfSquares + a[i]*a[i];
    }
    cout<<"The sum of squares is: "<<sumOfSquares<<endl;
}
