#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> factors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
        }
    }
    if (factors.size() >= k) {
        cout << factors[k-1] << endl;
     else {
        cout << -1 << endl;
    }
    return 0;
}
