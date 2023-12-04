#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> topKFrequent(vector<int>    nums, int k) {
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }
    vector<pair<int, int>> pairs;
    for (auto it : freq) {
        pairs.push_back(make_pair(it.first, it.second));
    }
    sort(pairs.begin(), pairs.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    );
    vector<int> result;
    for (int i = 0; i < k; i++) {
        result.push_back(pairs[i].first);
    }
    return result;
}

int main() {
    int n, k;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> k;
    vector<int> topK = topKFrequent(nums, k);
    for (int num : topK) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
