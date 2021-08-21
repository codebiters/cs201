#include <iostream>
/*This program is used to find a number from the array using LINEAR SEARCH*/
using namespace std;
int main(int argc, char **argv)
{
    int z, i;
    int a[100];
    
    // initializing the array
    for(i = 0; i<100; i++){
        a[i] = i;
    }
    
    cout<<"Please enter a positive integer: ";
    cin>>z;
    int found = 0;
    
    // loop to search the number
    for(i = 0; i<100; i++){
        if ( z == a[i]){
            found = 1;
            break;
        }
    }
    
    if(found == 1){
        cout<<"We found the integer at index: "<<i;
    } else {
        cout<<"The number was not found";
    }
}
