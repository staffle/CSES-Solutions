/**
 *    author:  amit_dwivedi
 *    created: 19.09.2022 14:59:47
 **/
#include <bits/stdc++.h>
using namespace std;
 
void to_binary(int cur, int n) {
    for (int i = n - 1; i >= 0; i--) {
        if (cur & (1 << i)) {
            cout << '1';
        } else {
            cout << '0';
        }
    }
    cout << "\n";
}
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    int two_n = (1 << n), tot = 0, cur = 0;
    vector<bool> vis(two_n + 1, false);
    while (tot != two_n) {
        to_binary(cur, n);
        tot++;
        vis[cur] = true;
        for (int i = 0; i < n; i++) {
            if (vis[cur ^ (1 << i)] == false) {
                cur = cur ^ (1 << i);
                break;
            }
        }
    }
}
