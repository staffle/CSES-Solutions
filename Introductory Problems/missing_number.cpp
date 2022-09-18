/**
 *    author:  amit_dwivedi
 *    created: 18.09.2022 19:32:29
 **/
#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    int64_t tot = 0;
    for (int i = 0, x; i < n - 1; ++i)
        cin >> x, tot += x;
    int64_t sigma_n = (1LL * n * (n + 1)) / 2;
    cout << sigma_n - tot;
}
