/**
 *    author:  amit_dwivedi
 *    created: 19.09.2022 14:59:47
 **/
#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> d;
    vector<bool> vis(n, false);
    multiset<pair<int, int>> ms;
    for (int i = 0, y; i < n; ++i)
        cin >> y, ms.insert({y, i}), d.push_back({y, i});
    sort(begin(d), end(d));
    int ans = 0;
    for (auto [i, id] : d) {
        if (vis[id]) continue;
        int left = x - i;
        ms.erase(ms.find({i, id}));
        vis[id] = true;
        ans++;
        auto it = ms.upper_bound({left, n + 1});
        if (it != ms.begin()) {
            it--;
            vis[it->second] = true;
            ms.erase(it);
        }
    }
    cout << ans << "\n";
}
