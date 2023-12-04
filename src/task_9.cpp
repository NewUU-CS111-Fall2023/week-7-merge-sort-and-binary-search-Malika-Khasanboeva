#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    set<int> nums;
    for (int i = 1; i <= n+k; i++) {
        nums.insert(i);
    }
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        nums.erase(arr[i]);
    }
    int count = 0;
    for (int num : nums) {
        count++;
        if (count == k) {
            cout << num << endl;
            break;
        }
    }
    return 0;
}
