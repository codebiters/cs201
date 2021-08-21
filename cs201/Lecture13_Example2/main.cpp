#include <iostream>
/*Array Manipulation - Transpose of a square Matrix: This program reads a matrix
 * (two dimensional array), displays its contents, transposes it and then displays the transposed matrix*/
using namespace std;

const int arraySize = 3;

void readMatrix(int arr[][arraySize]);
void displayMatrix(int a[][arraySize]);
void transposeMatrix(int a[][arraySize]);

int main(int argc, char** argv)
{
    int a[arraySize][arraySize];

    // Read the matrix elements into the array
    readMatrix(a);

    // Display the matrix
    cout << "\n\n"
         << "The orignal matrix is: "
         << "\n";
    displayMatrix(a);

    // Transpose the matrix
    transposeMatrix(a);

    // Display the transposed matrix
    cout << "\n\n"
         << "The transposed matrix is: "
         << "\n";
    displayMatrix(a);
}

void readMatrix(int arr[][arraySize])
{
    int row, col;

    for(row = 0; row < arraySize; row++) {
        for(col = 0; col < arraySize; col++) {
            cout << "\n"
                 << "Enter " << row << ", " << col << " element: ";
            cin >> arr[row][col];
        }
        cout << "\n";
    }
}

void displayMatrix(int a[][arraySize])
{
    int row, col;
    for(row = 0; row < arraySize; row++) {
        for(col = 0; col < arraySize; col++) {
            cout << a[row][col] << "\t";
        }
        cout << "\n";
    }
}

void transposeMatrix(int a[][arraySize])
{
    int row, col;
    int temp;

    for(row = 0; row < arraySize; row++) {
        for(col = row; col < arraySize; col++) {
            // interchaniging the values here using the swapping machanism
            temp = a[row][col]; // save the orignal value in the temp variable
            a[row][col] = a[col][row];
            a[col][row] = temp;
        }
    }
}
