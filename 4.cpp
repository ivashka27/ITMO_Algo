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
            ans++;
            while (i + 1 < n && j + 1 < m && a[i + 1] == b[j + 1]) { 
                i++, j++, ans++;
            }
            while (i + 1 < n && a[i + 1] == b[j]) {                
                i++, ans++;
            }
            while (j + 1 < m && a[i] == b[j + 1]) {
                j++, ans++;
            }
            i++, j++;
        }
    }
    
    cout << ans;
    
    return 0;
}