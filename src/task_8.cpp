#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n-1);
    int sum = n * (n+1) / 2;
    for (int i = 0; i < n-1; i++) {
        cin >> nums[i];
        sum -= nums[i];
    }
    for (int i = 0; i < n; i++) {
        if (i != sum) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
