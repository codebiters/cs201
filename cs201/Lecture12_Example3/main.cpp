#include <iostream>
/*This program takes values form user to fill a two-dimensional array(matrix) havin
 * two rows and three columns. And then displays these values in row column format.*/
using namespace std;
int main(int argc, char** argv)
{
    int matrix[2][3], row, col, maxRows = 2, maxCols = 3;

    // get the values for the matrix
    for(row = 0; row < maxRows; row++) {
        for(col = 0; col < maxCols; col++) {
            cout << "Please enter a value for position [" << row << ", " << col << "]: ";
            cin >> matrix[row][col];
        }
    }

    // display the value of the matrix
    cout << "The values entered for the matrix are: " << endl;
    for(row = 0; row < maxRows; row++) {
        for(col = 0; col < maxCols; col++) {
            cout << "\t" << matrix[row][col];
        }
        cout << endl; // to start the new line for the next row
    }
}
