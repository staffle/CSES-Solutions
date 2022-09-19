/**
 *    author:  amit_dwivedi
 *    created: 19.09.2022 14:59:47
 **/
#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    set<int> h;
    for (int i = 0, x; i < n; ++i) {
        cin >> x;
        h.insert(x);
    }
    cout << (int)h.size();
}
