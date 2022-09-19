/**
 *    author:  amit_dwivedi
 *    created: 19.09.2022 14:59:47
 **/
#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m, k, ans = 0;
    cin >> n >> m >> k;
    int a[n], b[m];
    multiset<int> apart;
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i], apart.insert(b[i]);
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        int mn = a[i] - k, mx = a[i] + k;
        auto it = apart.lower_bound(mn);
        if (it == apart.end() || *it > mx) continue;
        apart.erase(it);
        ans++;
    }
    cout << ans;
}
