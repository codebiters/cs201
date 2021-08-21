#include <iostream>
/*This program reads the input from user and store it into an array and stops at -1*/
using namespace std;
int main(int argc, char** argv)
{
    int c[100];
    int z, i = 0;
    do {
        cout << "Please enter the number (-1 to end input): " << endl;
        cin >> z;
        if(z != -1) {
            c[i] = z;
        }
        i++;
    } while(z != -1 && i < 100);

    cout << "The total number positive integers entered by user is " << i - 1;
}
