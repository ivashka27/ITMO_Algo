#include<bits/stdc++.h>

#define int long long

using namespace std;

//A[i] == B[j]

int32_t main() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &e : a) cin >> e;
    for (auto &e : b) cin >> e;
    int i = 0, j = 0;

    int ans = 0;

    while (i < n && j < m) {
        while (a[i] < b[j] && i + 1 < n) i++;
        while (b[j] < a[i] && j + 1 < m) j++;
        if (a[i] == b[j]) {
            int cnt1 = 1, cnt2 = 1;
            while (i + 1 < n && a[i + 1] == a[i]) cnt1++, i++;
            while (j + 1 < m && b[j + 1] == b[j]) cnt2++, j++;
            ans += cnt1 * cnt2;

        }
        i++, j++;
    }

    cout << ans;

    return 0;
}
