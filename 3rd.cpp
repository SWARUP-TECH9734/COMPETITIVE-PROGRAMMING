#include <iostream>
#include <vector>

using namespace std;

int searchDescending(const vector<int>& scores, int target) {
    int left = 0;
    int right = static_cast<int>(scores.size()) - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (scores[mid] == target) {
            return mid;
        } else if (scores[mid] > target) {
            left = mid + 1; // Target is smaller, look right
        } else {
            right = mid - 1; // Target is larger, look left
        }
    }

    return -1;
}

int main() {
    int n;
    cout << "Enter number of player scores: ";
    if (!(cin >> n)) return 0;

    vector<int> scores(n);
    cout << "Enter " << n << " scores in descending order (highest to lowest): ";
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int target;
    cout << "Enter target score to find: ";
    cin >> target;

    int index = searchDescending(scores, target);

    if (index != -1) {
        cout << "\nTarget score found at index: " << index << endl;
    } else {
        cout << "\nTarget score not found (Output: -1)" << endl;
    }

    return 0;
}