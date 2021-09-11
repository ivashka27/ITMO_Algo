#include<bits/stdc++.h>

#define int long long

using namespace std;

//(i, j): A[i] - B[j] - minimum

int32_t main() {
    int n, m, s; cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &e : a) cin >> e;
    for (auto &e : b) cin >> e;
    int i = 0, j = 0;
    int ansi = 0, ansj = 0;
    
    int ans = 1e9;
    
    while (i < n && j < m) {
        if (abs(a[i] - b[j]) < ans) {
            ans = abs(a[i] - b[j]);
            ansi = i, ansj = j;
        }
        if (a[i] < b[j]) i++;
        else j++;
        
    }
    
    cout << ansi << " " << ansj << "!";
    
    return 0;
}