/**
 *    author:  amit_dwivedi
 *    created: 18.09.2022 19:43:08
 **/
#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    int64_t ans = 0;
    for (int j = 0, i, p_max = 0; j < n; j++) {
        cin >> i;
        if (i < p_max) {
            ans += p_max - i;
        }
        p_max = max(p_max, i);
    }
    cout << ans;
}
