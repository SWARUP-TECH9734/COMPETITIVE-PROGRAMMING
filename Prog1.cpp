// Problem 1: Find the effective address of an element of a 2-D array
// stored in Row Major Order.

#include <iostream>
using namespace std;

int main() {
    int baseAddress, row, col, nCols, elementSize;

    cout << "Enter base address: ";
    cin >> baseAddress;

    cout << "Enter row number of the element: ";
    cin >> row;

    cout << "Enter column number of the element: ";
    cin >> col;

    cout << "Enter number of columns in the array: ";
    cin >> nCols;

    cout << "Enter size of each element in bytes: ";
    cin >> elementSize;

    int effectiveAddress = baseAddress + ((row * nCols) + col) * elementSize;

    cout << "Effective Address = " << effectiveAddress << endl;

    return 0;
}
