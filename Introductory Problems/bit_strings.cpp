/**
 *    author:  amit_dwivedi
 *    created: 18.09.2022 19:43:08
 **/
#include <bits/stdc++.h>
using namespace std;
 
const int64_t MOD = 1e9 + 7;
 
template <typename T>
T power(T a, T b, int64_t m = MOD) {
    a %= m;
    T res = (a != 0);
    while (b > 0) {
        if (b & 1)
            res = 1ll * res * a % m;
        a = 1ll * a * a % m;
        b >>= 1;
    }
    return res;
}
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int64_t n;
    cin >> n;
    cout << power((int64_t)2, n);
}
