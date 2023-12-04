#include <iostream>
using namespace std;

int recursivePow(int x, int n) {
    if (n == 0) {
        return 1;
     else {
        return x * recursivePow(x, n-1);
    }
}

int main() {
    int n, x;
    cin >> n;
    x = n / 2;
    cout << recursivePow(x, n) << endl;
    return 0;
}
