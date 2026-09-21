// Problem 2: Implement Binary Search.

#include <iostream>
using namespace std;

int main() {
    int a[100], n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements in sorted order:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> target;

    int low = 0, high = n - 1;
    int position = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == target) {
            position = mid;
            break;
        } else if (a[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (position != -1)
        cout << "Element found at position " << position + 1 << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
