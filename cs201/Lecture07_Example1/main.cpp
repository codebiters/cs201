#include <iostream>
/*This program allows the user to guess a character from a to z
 * do-while construct is used to allow fice tries for guessing*/
using namespace std;
int main(int argc, char** argv)
{
    // declare & initialize variables
    int tryNum = 0;
    char c;

    // do while construct
    do {
        cout << "Please enter a character between a-z for guessing: ";
        cin >> c;

        // check the entered character for equality
        if(c == 'z') {
            cout << "Congratulations, Your guess is correct";
            tryNum = 6;
        } else {
            tryNum = tryNum + 1;
        }
    } while(tryNum <= 5 && c != 'z');
}
