#include<bits/stdc++.h>

#define int long long

using namespace std;

//(i, j): A[i] + B[j] == S

int32_t main() {
    int n, m, s; cin >> n >> m >> s;
    vector<int> a(n), b(m);
    for (auto &e : a) cin >> e;
    for (auto &e : b) cin >> e;
    int i = 0, j = m - 1;
    
    int ans = 0;
    
    while (i < n && j >= 0) {
        int sum = a[i] + b[j];
        if (sum == s) {
            cout << i << " " << j << "\n";
            break;
        }
        else if (sum < s) {
            i++; 
        }
        else {
            j--;
        }
    }
    
    return 0;
}