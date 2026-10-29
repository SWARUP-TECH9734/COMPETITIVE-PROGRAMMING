#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

pair<int, int> twoSum(const vector<int>& prices, int target) {
    unordered_map<int, int> index_map; // value -> index

    for (int i = 0; i < prices.size(); i++) {
        int complement = target - prices[i];
        if (index_map.find(complement) != index_map.end()) {
            return {index_map[complement], i};
        }
        index_map[prices[i]] = i;
    }

    return {-1, -1};
}

int main() {
    int n;
    cout << "Enter total number of products: ";
    if (!(cin >> n)) return 0;

    vector<int> prices(n);
    cout << "Enter " << n << " product prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int target;
    cout << "Enter target gift-card amount: ";
    cin >> target;

    pair<int, int> ans = twoSum(prices, target);

    if (ans.first != -1) {
        cout << "\nIndices found: [" << ans.first << ", " << ans.second << "]" << endl;
        cout << "Prices: " << prices[ans.first] << " + " << prices[ans.second] 
             << " = " << target << endl;
    } else {
        cout << "\nNo two prices add up to the target." << endl;
    }

    return 0;
}