// Problem 10: Find maximum and minimum element in an array.

#include <iostream>
using namespace std;

int main() {
    int a[100], n, i;
    int max, min;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Assume first element is both maximum and minimum
    max = a[0];
    min = a[0];

    // Find maximum and minimum
    for (i = 1; i < n; i++) {

        if (a[i] > max) {
            max = a[i];
        }

        if (a[i] < min) {
            min = a[i];
        }
    }

    cout << "Maximum element = " << max << endl;
    cout << "Minimum element = " << min << endl;

    return 0;
}
