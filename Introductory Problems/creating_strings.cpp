/**
 *    author:  amit_dwivedi
 *    created: 19.09.2022 14:59:47
 **/
#include <bits/stdc++.h>
using namespace std;
 
int64_t factorial(int x) {
    int64_t ans = 1LL;
    for (int i = 1; i <= x; i++) {
        ans = ans * i;
    }
    return ans;
}
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
 
    string s;
    cin >> s;
 
    int n = s.length();
    map<int, int> f;
    for (auto i : s) {
        f[i]++;
    }
    int64_t ans = factorial(n);
    for (auto [i, c] : f) ans /= factorial(c);
    cout << ans << endl;
 
    sort(begin(s), end(s));
    unordered_set<string> vis;
 
    cout << s << endl;
    vis.insert(s);
    while (next_permutation(begin(s), end(s))) {
        if (!vis.count(s)) {
            cout << s << endl;
            vis.insert(s);
        }
    }
}
