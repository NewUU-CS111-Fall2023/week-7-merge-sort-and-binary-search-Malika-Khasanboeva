#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> permut(n);
    for (int i = 0; i < n; ++i) {
        cin >> permut[i];
    }

    long long initial_beauty = 0;
    for (int i = 0; i < n; ++i) {
        initial_beauty += abs(permut[i] - (i + 1));
    }

    long long max_beauty = initial_beauty;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {

            swap(permut[i], permut[j]);

            long long current_beauty = 0;
            for (int k = 0; k < n; ++k) {
                current_beauty += abs(permut[k] - (k + 1));
            }

            max_beauty = max(max_beauty, current_beauty);

            swap(permut[i], permut[j]);
        }
    }

    cout << max_beauty << endl;

    return 0;
}
