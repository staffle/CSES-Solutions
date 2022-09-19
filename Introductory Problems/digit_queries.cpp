/**
 *    author:  amit_dwivedi
 *    created: 19.09.2022 14:59:47
 **/
#include <bits/stdc++.h>
using namespace std;
int64_t power(int64_t a, int64_t b) {
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    if (b % 2 == 1)
        return power(a, b - 1) * a;
    int64_t q = power(a, b / 2);
    return q * q;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int q;
    cin >> q;
    vector<int64_t> ans(18);
    for (int i = 1; i < 18; i++) {
        ans[i] = i * (power(10LL, i) - power(10LL, i - 1));
    }
 
    while (q--) {
        int64_t n;
        cin >> n;
        int i = 0;
        for (; i < 18; i++) {
            if (n > ans[i]) {
                n -= ans[i];
            } else {
                break;
            }
        }
        int64_t first = power(10LL, i - 1) - 1 + (n / i);
        n = (n % i);
        if (n == 0)
            n = i;
        else
            first++;
        n--;
        cout << to_string(first)[n] << endl;
    }
}
