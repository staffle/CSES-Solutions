/**
 *    author:  amit_dwivedi
 *    created: 19.09.2022 14:59:47
 **/
#include <bits/stdc++.h>
using namespace std;
const int64_t INF = 1e18;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int64_t n, tot = 0, ans = INF;
    cin >> n;
    vector<int64_t> a(n);
    for (auto& i : a)
        cin >> i, tot += i;
 
    for (int mask = 1; mask < (1 << n); mask++) {
        int64_t subset_tot = 0;
        for (int i = 0; i < n; i++)
            if ((mask >> i) & 1) subset_tot += a[i];
        ans = min(ans, abs(tot - 2 * subset_tot));
    }
    cout << ans << endl;
}
