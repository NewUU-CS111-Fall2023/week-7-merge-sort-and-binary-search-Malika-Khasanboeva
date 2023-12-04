#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t–) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        int ans = 0;
        for(int k=n; k>=3; k-=2) {
            vector<int> medians;
            for(int i=0; i<=n-k; i++) {
                vector<int> temp(a.begin()+i, a.begin()+i+k);
                sort(temp.begin(), temp.end());
                medians.push_back(temp[k/2]);
            }
            int min_median = *min_element(medians.begin(), medians.end());
            ans += min_median;
            for(int i=0; i<n-k+1; i++) {
                if(a[i+k/2] == min_median) {
                    a.erase(a.begin()+i+k/2);
                    n–;
                    break;
                }
            }
        }
        ans += accumulate(a.begin(), a.end(), 0);
        cout << ans << endl;
    }
    return 0;
