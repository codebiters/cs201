#include <iostream>
/*This program display the table of 2 up to multiplier 10*/
using namespace std;
int main(int argc, char **argv)
{
    int counter;
    
    // for loop
    for(counter = 1; counter <= 10; counter=counter + 1){
        cout<<"2 x "<<counter<<" = "<<2*counter<<"\n";
    }
}
