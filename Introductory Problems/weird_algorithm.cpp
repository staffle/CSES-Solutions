/**
 *    author:  amit_dwivedi
 *    created: 18.09.2022 19:32:29
 **/
#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int64_t n;
    cin >> n;
    while (1) {
        if (n == 1) {
            cout << 1 << endl;
            return 0;
        }
        cout << n << " ";
        if (n & 1)
            n = n * 3LL + 1;
        else
            n /= 2;
    }
}
