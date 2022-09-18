/**
 *    author:  amit_dwivedi
 *    created: 18.09.2022 19:43:08
 **/
#include <bits/stdc++.h>
using namespace std;
 
const int64_t MOD = 1e9 + 7;
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int64_t n, ans = 0;
    cin >> n;
    for (int64_t i = 5; i <= n; i = i * 5) {
        ans += n / i;
    }
    cout << ans;
}
