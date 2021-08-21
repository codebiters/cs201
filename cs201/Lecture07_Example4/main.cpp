#include <iostream>
/*This program displays the sum of squares of integers from 1 to n*/
using namespace std;
int main(int argc, char **argv)
{
    // declare and initialize variables 
    int i, n, sum;
    sum = 0;
    
    // get the input from the user and construct a for loop
    cout<<"Please enter a positive number for sum of squares: ";
    cin>>n;
    
    for(i = 1; i<=n; i++){
        sum += i * i;
    }
    cout<<"The sum of the first "<<n<<" squares is "<<sum<<endl;
}
