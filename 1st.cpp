#include <iostream>
#include <vector>

using namespace std;

// Function using XOR bit manipulation to isolate the non-repeating ID
int findSingleNumber(const vector<int>& ids) {
    int unique_id = 0;
    for (int id : ids) {
        unique_id ^= id;
    }
    return unique_id;
}

int main() {
    int n;
    cout << "Enter the number of employee IDs (must be an odd number): ";
    if (!(cin >> n)) return 0;

    vector<int> ids(n);
    cout << "Enter " << n << " employee IDs separated by spaces: ";
    for (int i = 0; i < n; i++) {
        cin >> ids[i];
    }

    int result = findSingleNumber(ids);
    cout << "\nThe ID that appears only once is: " << result << endl;

    return 0;
}