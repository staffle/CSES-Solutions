/**
 *    author:  amit_dwivedi
 *    created: 19.09.2022 14:59:47
 **/
#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, m;
        cin >> n >> m;
        int tot = n + m;
        if (tot % 3 != 0 || tot / 3 > min(n, m))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
