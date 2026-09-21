// Problem 3: Insert an element at a given position in an array.

#include <iostream>
using namespace std;

int main() {
    int a[100], n, element, position;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter element to insert: ";
    cin >> element;

    cout << "Enter position (1 to " << n + 1 << "): ";
    cin >> position;

    if (position < 1 || position > n + 1) {
        cout << "Invalid position." << endl;
        return 0;
    }

    for (int i = n; i >= position; i--) {
        a[i] = a[i - 1];
    }

    a[position - 1] = element;
    n++;

    cout << "Array after insertion:\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
