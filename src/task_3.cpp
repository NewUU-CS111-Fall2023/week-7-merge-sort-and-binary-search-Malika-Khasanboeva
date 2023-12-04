#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeArrays(vector<int>    A, vector<int>    B) {
    int n = A.size(), m = B.size();
    vector<int> C;
    int i = 0, j = 0;
    while (i < n        j < m) {
        if (A[i] >= B[j]) {
            C.push_back(A[i]);
            i++;
         else {
            C.push_back(B[j]);
            j++;
        }
    }
    while (i < n) {
        C.push_back(A[i]);
        i++;
    }
    while (j < m) {
        C.push_back(B[j]);
        j++;
    }
    return C;
}

int main() {
    int T;
    cin >> T;
    while (T–) {
        int n, m;
        cin >> n >> m;
        vector<int> A(n), B(m);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> B[i];
        }
        vector<int> C = mergeArrays(A, B);
        for (int i = 0; i < C.size(); i++) {
            cout << C[i] << " ";
        }
        cout << endl;
    }
    return 0;
