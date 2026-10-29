#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> removeDuplicates(const vector<int>& nums) {
    unordered_set<int> seen;
    vector<int> result;

    for (int num : nums) {
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Enter number of roll numbers: ";
    if (!(cin >> n)) return 0;

    vector<int> nums(n);
    cout << "Enter " << n << " roll numbers separated by spaces: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = removeDuplicates(nums);

    cout << "\nUnique roll numbers (preserving first appearance): ";
    for (int roll : result) {
        cout << roll << " ";
    }
    cout << endl;

    return 0;
}