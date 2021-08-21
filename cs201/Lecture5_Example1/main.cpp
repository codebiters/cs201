#include <iostream>
/*This program checks the age of Amer and Amara's 
 * and displays the appropriate the message.*/
 using namespace std;
int main(int argc, char **argv)
{
    int AmerAge, AmaraAge;
    
    // prompt the user to enter Amer's Age
    cout<<"Please enter Amer's Age: ";
    cin>>AmerAge;
    
    // prompt the user to enter Amara's AmaraAge
    cout<<"Please enter Amara's Age: ";
    cin>>AmaraAge;
    
    // perform the test
    if(AmaraAge>AmaraAge){
        cout<<"Amer is older than Amara";
    } else{
        cout<<"Amara is older than Amer";
    }
}
