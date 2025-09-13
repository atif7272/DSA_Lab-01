#include <iostream>
#include <vector>
using namespace std;

vector<int> getIndices(const vector<int>& arr, int key) {
    vector<int> positions;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            positions.push_back(i);
        }
    }
    return positions;
}

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << (i == 0 ? "st" : i == 1 ? "nd" : i == 2 ? "rd" : "th") << " element: ";
        cin >> nums[i];
    }

    cout << "Enter the key to search: ";
    cin >> key;

    vector<int> res = getIndices(nums, key);

    cout << "Positions of " << key << " in the array: ";
    for (int pos : res) cout << pos << " ";
    cout << endl;

    return 0;
}
