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
    set<pair<int, int>> ms;
    for (int i = 0, y; i < n; ++i)
        cin >> y, ms.insert({y, i});
    for (int i = 0, y; i < x; ++i) {
        cin >> y;
        if (ms.size() == 0) {
            cout << -1 << endl;
            continue;
        }
        auto it = ms.upper_bound({y, n});
        if (it != ms.begin()) {
            it--;
            ms.erase(it);
            cout << it->first << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
