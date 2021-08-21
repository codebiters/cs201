#include <iostream>
/*Array Manipulation - Flipping of a Matrix (reversing the row order): This program reads a
 * matrix (two dimensional array), displays its contents and also displays the flipped matrix*/
using namespace std;
const int maxRows = 3;
const int maxCols = 3;

void readMatrix(int arr[][maxCols]);
void displaMatrix(int a[][maxCols]);
void displayFlippedMatrix(int a[][maxCols]);

int main(int argc, char** argv)
{
    int a[maxRows][maxCols];

    // Read the matrix element into the array
    readMatrix(a);

    // Display the orignal Matrix
    cout << "\n\n"
         << "The orignal matrix is: "
         << "\n";
    displaMatrix(a);

    // Display the flipped matrix
    cout << "\n\n"
         << "The flipped matrix is: "
         << "\n";
    displayFlippedMatrix(a);
}

void readMatrix(int arr[][maxCols])
{
    int row, col;

    for(row = 0; row < maxRows; row++) {
        for(col = 0; col < maxCols; col++) {
            cout << "\n"
                 << "Enter " << row << ", " << col << " element: ";
            cin >> arr[row][col];
        }
        cout << "\n";
    }
}

void displaMatrix(int a[][maxCols])
{
    int row, col;
    for(row = 0; row < maxRows; row++) {
        for(col = 0; col < maxCols; col++) {
            cout << a[row][col] << "\t";
        }
        cout << "\n";
    }
}

void displayFlippedMatrix(int a[][maxCols])
{
    int row, col;
    for(row = maxRows - 1; row >= 0; row--) {
        for(col = 0; col < maxCols; col++) {
            cout << a[row][col] << "\t";
        }
        cout << "\n";
    }
}