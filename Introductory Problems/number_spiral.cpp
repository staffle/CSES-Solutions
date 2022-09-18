/**
 *    author:  amit_dwivedi
 *    created: 18.09.2022 19:43:08
 **/
#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t, x, y;
    cin >> t;
    while (t-- > 0) {
        cin >> x >> y;
        int64_t mn = max(x, y);
        mn--;
        int64_t rem = mn * mn;
        int64_t tot_num = 2 * mn + 1;
        if (mn % 2 == 0) {
            if (x == mn + 1) {
                cout << rem + y << endl;
            } else {
                cout << rem + tot_num - x + 1 << endl;
            }
        } else {
            if (x == mn + 1) {
                cout << rem + tot_num - y + 1 << endl;
            } else {
                cout << rem + x << endl;
            }
        }
    }
}
