#include <iostream>
/*This program takes two arrays of 5 integers from user
 * displays them and after comparin them displays the result*/
using namespace std;
int main(int argc, char **argv)
{
    int num1[5], num2[5], i, equals = 0;
    
    // input of 5 integers of first array
    cout<<"Please enter five integers for first array: "<<endl;
    for(i = 0; i<5; i++){
        cin>> num1[i];
    }
    
    // input of 5 integers of second array
    cout<<"Please enter five integers for second array: "<<endl;
    for(i = 0; i<5; i++){
        cin>> num2[i];
    }
    
    // display the elements of two arrays
    cout<<"\nThe values in the first array are: ";
    for(i = 0; i<5; i++){
        cout<<"\t"<<num1[i];
    }
    
    cout<<"\nThe values in the second array are: ";
    for(i = 0; i<5; i++){
        cout<<"\t"<<num2[i];
    }
    
    // compare the two arrays
    for(i = 0; i<5; i++){
        if (num1[i] != num2[i]){
            cout<<"\nThe arrays are not equal";
            equals = 0; // set the flag to false
            break;
        } else{
            equals = 1;
        }
    }
    
    if(equals){
        cout<<"\n Both arrays are equal";
    }
}
