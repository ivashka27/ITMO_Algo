#include<bits/stdc++.h>

using namespace std;

//A[i] > B[j]

int32_t main() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &e : a) cin >> e;
    for (auto &e : b) cin >> e;
    int ff = 0, ss = 0;
    int ans = 0;
    while (ff < n || ss < m) {
        if (b[ss] < a[ff]) {
            ans += (n - ff);
            ss++;
        }
        else {
            ff++;
        }
    }
    cout << ans;
    return 0;
}