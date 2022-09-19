/**
 *    author:  amit_dwivedi
 *    created: 19.09.2022 14:59:47
 **/
#include <bits/stdc++.h>
using namespace std;
const int N = 8;
 
string b[N];
multiset<int> row, col, d1, d2;
int64_t ans;
 
bool is_safe(int i, int j) {
    return row.count(i) == 0 && col.count(j) == 0 && d1.count(i - j) == 0 && d2.count(i + j) == 0;
}
 
int64_t solve(int j) {
    if (j >= N)
        return 1;
    int64_t ans = 0;
    for (int i = 0; i < N; i++) {
        if (b[i][j] == '.' && is_safe(i, j)) {
            col.insert(j);
            row.insert(i);
            d1.insert(i - j);
            d2.insert(i + j);
            ans += solve(j + 1);
            col.erase(col.find(j));
            row.erase(row.find(i));
            d1.erase(d1.find(i - j));
            d2.erase(d2.find(i + j));
        }
    }
    return ans;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    for (int i = 0; i < N; ++i) cin >> b[i];
    cout << solve(0) << endl;
}
