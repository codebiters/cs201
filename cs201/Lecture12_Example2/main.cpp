#include <iostream>
/*This example demonstrate that when an array is passed to a function it is a call by refrence
 * and the changes made by that function affects the orignal array*/
using namespace std;
void getValues(int[], int);
int main(int argc, char** argv)
{
    int num[10], i;
    getValues(num, 10); // function call, passing array num

    // displays the values of the array
    cout << "\nThe array is populated with values\n";
    for(i = 0; i < 10; i++) {
        cout << "num[" << i << "]=" << num[i] << endl;
    }
}

void getValues(int num[], int arraySize)
{
    int i;
    for(i = 0; i < arraySize; i++) {
        num[i] = i;
    }
}
