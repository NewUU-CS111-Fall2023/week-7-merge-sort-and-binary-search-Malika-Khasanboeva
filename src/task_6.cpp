#include <iostream>
#include <vector>
using namespace std;

vector<int> searchInsert(vector<int>    nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return 1, mid;
         else if (nums[mid] < target) {
            left = mid + 1;
         else {
            right = mid - 1;
        }
    }
    return -1, left;
}

int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> target;
    vector<int> result = searchInsert(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}
